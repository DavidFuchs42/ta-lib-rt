/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  072404 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return max( TA_CANDLEAVGPERIOD(BodyShort), TA_CANDLEAVGPERIOD(ShadowShort) );
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLSHORTLINE - Short Line Candle
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlShortLine( int    startIdx,
/* Generated */                                              int    endIdx,
/* Generated */                                              SubArray<double>^ inOpen,
/* Generated */                                              SubArray<double>^ inHigh,
/* Generated */                                              SubArray<double>^ inLow,
/* Generated */                                              SubArray<double>^ inClose,
/* Generated */                                              [Out]int%    outBegIdx,
/* Generated */                                              [Out]int%    outNBElement,
/* Generated */                                              SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlShortLine( int    startIdx,
/* Generated */                                              int    endIdx,
/* Generated */                                              cli::array<double>^ inOpen,
/* Generated */                                              cli::array<double>^ inHigh,
/* Generated */                                              cli::array<double>^ inLow,
/* Generated */                                              cli::array<double>^ inClose,
/* Generated */                                              [Out]int%    outBegIdx,
/* Generated */                                              [Out]int%    outNBElement,
/* Generated */                                              cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlShortLine( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              double       inOpen[],
/* Generated */                              double       inHigh[],
/* Generated */                              double       inLow[],
/* Generated */                              double       inClose[],
/* Generated */                              MInteger     outBegIdx,
/* Generated */                              MInteger     outNBElement,
/* Generated */                              int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLSHORTLINE( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                                   const double inOpen[],
/* Generated */                                                   const double inHigh[],
/* Generated */                                                   const double inLow[],
/* Generated */                                                   const double inClose[],
/* Generated */                                                   int          *outBegIdx,
/* Generated */                                                   int          *outNBElement,
/* Generated */                                                   int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double BodyPeriodTotal, ShadowPeriodTotal;
    int i, outIdx, BodyTrailingIdx, ShadowTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLSHORTLINE)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   BodyPeriodTotal = 0;
   BodyTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyShort);
   ShadowPeriodTotal = 0;
   ShadowTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowShort);
   
   i = BodyTrailingIdx;
   while( i < startIdx ) {
        BodyPeriodTotal += TA_CANDLERANGE( BodyShort, i );
        i++;
   }
   i = ShadowTrailingIdx;
   while( i < startIdx ) {
        ShadowPeriodTotal += TA_CANDLERANGE( ShadowShort, i );
        i++;
   }

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - short real body
    * - short upper and lower shadow
    * The meaning of "short" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100) when white, negative (-1 to -100) when black;
    * it does not mean bullish or bearish
    */
   outIdx = 0;
   do
   {
        if( TA_REALBODY(i) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal, i ) &&
            TA_UPPERSHADOW(i) < TA_CANDLEAVERAGE( ShadowShort, ShadowPeriodTotal, i ) &&
            TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowShort, ShadowPeriodTotal, i ) )
            outInteger[outIdx++] = TA_CANDLECOLOR(i) * 100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        BodyPeriodTotal += TA_CANDLERANGE( BodyShort, i ) - TA_CANDLERANGE( BodyShort, BodyTrailingIdx );
        ShadowPeriodTotal += TA_CANDLERANGE( ShadowShort, i ) - TA_CANDLERANGE( ShadowShort, ShadowTrailingIdx );
        i++;
        BodyTrailingIdx++;
        ShadowTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineStateInit( struct TA_CdlShortLine_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineStateInit( struct TA_cdlShortLine_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_StateInit( struct TA_CDLSHORTLINE_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDLSHORTLINE_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    MEM_SIZE_P = TA_CDLSHORTLINE_Lookback();
/* Generated */    #ifndef TA_CDLSHORTLINE_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_CDLSHORTLINE_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineState( struct TA_CdlShortLine_State* _state,
/* Generated */                            cli::array<double>^ inOpen,
/* Generated */                            cli::array<double>^ inHigh,
/* Generated */                            cli::array<double>^ inLow,
/* Generated */                            cli::array<double>^ inClose,
/* Generated */                            cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineState( struct TA_cdlShortLine_State* _state,
/* Generated */                             double       inOpen,
/* Generated */                             double       inHigh,
/* Generated */                             double       inLow,
/* Generated */                             double       inClose,
/* Generated */                             int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_State( struct TA_CDLSHORTLINE_State* _state,
/* Generated */                                                const double inOpen,
/* Generated */                                                const double inHigh,
/* Generated */                                                const double inLow,
/* Generated */                                                const double inClose,
/* Generated */                                                int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
#define TA_CDLSHORTLINE_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_CDLSHORTLINE_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
                if (FIRST_LAUNCH)
                   {
                         STATE.BodyPeriodTotal = 0.;
                         STATE.ShadowPeriodTotal = 0.;

                         STATE.periodBody = TA_CANDLEAVGPERIOD(BodyShort);
                         STATE.periodShadow = TA_CANDLEAVGPERIOD(ShadowShort);

                         STATE.gapShadow = MEM_SIZE - STATE.periodShadow;
                         STATE.gapBody = MEM_SIZE - STATE.periodBody;
                   }

                if (!(NEED_MORE_DATA))
                {

                    if( TA_REALBODY_STATE_CUR() < TA_CANDLEAVERAGE_STATE_CUR( BodyShort, STATE.BodyPeriodTotal) &&
                        TA_UPPERSHADOW_STATE_CUR() < TA_CANDLEAVERAGE_STATE_CUR( ShadowShort, STATE.ShadowPeriodTotal) &&
                        TA_LOWERSHADOW_STATE_CUR() < TA_CANDLEAVERAGE_STATE_CUR( ShadowShort, STATE.ShadowPeriodTotal) )
                        VALUE_HANDLE_DEREF(outInteger) = TA_CANDLECOLOR_STATE_CUR() * 100;
                    else
                        VALUE_HANDLE_DEREF(outInteger) = 0;

                }


                if ((int)STATE.mem_index-1 >= STATE.gapShadow)
                {
                  STATE.ShadowPeriodTotal += TA_CANDLERANGE_STATE_CUR(  ShadowShort );
                }

                if ((int)STATE.mem_index-1 >= STATE.gapBody)
                {
                  STATE.BodyPeriodTotal += TA_CANDLERANGE_STATE_CUR( BodyShort );
                }


                if (!(NEED_MORE_DATA))
                {
                 STATE.ShadowPeriodTotal -= TA_CANDLERANGE_STATE( ShadowShort, -STATE.periodShadow );
                 STATE.BodyPeriodTotal -= TA_CANDLERANGE_STATE( BodyShort, -STATE.periodBody );
                }

                PUSH_TO_MEM(inOpen,inOpen);
                PUSH_TO_MEM(inHigh,inHigh);
                PUSH_TO_MEM(inLow,inLow);
                PUSH_TO_MEM(inClose,inClose);
                if (NEED_MORE_DATA) return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData);

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineStateFree( struct TA_CdlShortLine_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineStateFree( struct TA_cdlShortLine_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_StateFree( struct TA_CDLSHORTLINE_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) TA_Free(MEM_P);
/* Generated */          TA_Free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineStateSave( struct TA_CdlShortLine_State* _state,
/* Generated */                                FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineStateSave( struct TA_cdlShortLine_State* _state,
/* Generated */                                 FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_StateSave( struct TA_CDLSHORTLINE_State* _state,
/* Generated */                                                    FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */     int io_res; int state_is_null; state_is_null = (_state == NULL);
/* Generated */    io_res = fwrite(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    io_res = fwrite(&STATE.mem_index,sizeof(STATE.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.mem_size,sizeof(STATE.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    memory_allocated = STATE.memory != NULL;
/* Generated */    io_res = fwrite(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_CDLSHORTLINE_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */    io_res = fwrite(&STATE.ShadowPeriodTotal,sizeof(STATE.ShadowPeriodTotal),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.periodShadow,sizeof(STATE.periodShadow),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.gapShadow,sizeof(STATE.gapShadow),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.BodyPeriodTotal,sizeof(STATE.BodyPeriodTotal),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.periodBody,sizeof(STATE.periodBody),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.gapBody,sizeof(STATE.gapBody),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/

   /* insert state save code here. */   
   return 0;
}

/**** START GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlShortLineStateLoad( struct TA_CdlShortLine_State** _state,
/* Generated */                                FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlShortLineStateLoad( struct TA_cdlShortLine_State** _state,
/* Generated */                                 FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLSHORTLINE_StateLoad( struct TA_CDLSHORTLINE_State** _state,
/* Generated */                                                    FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDLSHORTLINE_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_CDLSHORTLINE_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_CDLSHORTLINE_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */    io_res = fread(&STATE_P.ShadowPeriodTotal,sizeof(STATE_P.ShadowPeriodTotal),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.periodShadow,sizeof(STATE_P.periodShadow),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.gapShadow,sizeof(STATE_P.gapShadow),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.BodyPeriodTotal,sizeof(STATE_P.BodyPeriodTotal),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.periodBody,sizeof(STATE_P.periodBody),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.gapBody,sizeof(STATE_P.gapBody),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/

   /* insert state load code here. */   
   return 0;
}

/**** START GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlShortLine( int    startIdx,
/* Generated */                                              int    endIdx,
/* Generated */                                              SubArray<float>^ inOpen,
/* Generated */                                              SubArray<float>^ inHigh,
/* Generated */                                              SubArray<float>^ inLow,
/* Generated */                                              SubArray<float>^ inClose,
/* Generated */                                              [Out]int%    outBegIdx,
/* Generated */                                              [Out]int%    outNBElement,
/* Generated */                                              SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlShortLine( int    startIdx,
/* Generated */                                              int    endIdx,
/* Generated */                                              cli::array<float>^ inOpen,
/* Generated */                                              cli::array<float>^ inHigh,
/* Generated */                                              cli::array<float>^ inLow,
/* Generated */                                              cli::array<float>^ inClose,
/* Generated */                                              [Out]int%    outBegIdx,
/* Generated */                                              [Out]int%    outNBElement,
/* Generated */                                              cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlShortLine( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              float        inOpen[],
/* Generated */                              float        inHigh[],
/* Generated */                              float        inLow[],
/* Generated */                              float        inClose[],
/* Generated */                              MInteger     outBegIdx,
/* Generated */                              MInteger     outNBElement,
/* Generated */                              int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLSHORTLINE( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                               const float  inOpen[],
/* Generated */                               const float  inHigh[],
/* Generated */                               const float  inLow[],
/* Generated */                               const float  inClose[],
/* Generated */                               int          *outBegIdx,
/* Generated */                               int          *outNBElement,
/* Generated */                               int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double BodyPeriodTotal, ShadowPeriodTotal;
/* Generated */     int i, outIdx, BodyTrailingIdx, ShadowTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLSHORTLINE)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    BodyPeriodTotal = 0;
/* Generated */    BodyTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyShort);
/* Generated */    ShadowPeriodTotal = 0;
/* Generated */    ShadowTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowShort);
/* Generated */    i = BodyTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyPeriodTotal += TA_CANDLERANGE( BodyShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = ShadowTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowPeriodTotal += TA_CANDLERANGE( ShadowShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( TA_REALBODY(i) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal, i ) &&
/* Generated */             TA_UPPERSHADOW(i) < TA_CANDLEAVERAGE( ShadowShort, ShadowPeriodTotal, i ) &&
/* Generated */             TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowShort, ShadowPeriodTotal, i ) )
/* Generated */             outInteger[outIdx++] = TA_CANDLECOLOR(i) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         BodyPeriodTotal += TA_CANDLERANGE( BodyShort, i ) - TA_CANDLERANGE( BodyShort, BodyTrailingIdx );
/* Generated */         ShadowPeriodTotal += TA_CANDLERANGE( ShadowShort, i ) - TA_CANDLERANGE( ShadowShort, ShadowTrailingIdx );
/* Generated */         i++;
/* Generated */         BodyTrailingIdx++;
/* Generated */         ShadowTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

