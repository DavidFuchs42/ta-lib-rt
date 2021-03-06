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
 *  MF       Mario Fortier
 *  AA       Andrew Atkinson
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *  020605 AA   Fix #1117656. NULL pointer assignement.
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
/* Generated */ int Core::TrixLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int trixLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_TRIX_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   int emaLookback;
/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   emaLookback = LOOKBACK_CALL(EMA)( optInTimePeriod );
   return (emaLookback*3) + LOOKBACK_CALL(ROCR)( 1 );
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_TRIX - 1-day Rate-Of-Change (ROC) of a Triple Smooth EMA
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Trix( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<double>^ inReal,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Trix( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<double>^ inReal,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trix( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      double       inReal[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                           const double inReal[],
/* Generated */                                           int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                           int          *outBegIdx,
/* Generated */                                           int          *outNBElement,
/* Generated */                                           double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
   double k;
   ARRAY_REF(tempBuffer);
   VALUE_HANDLE_INT(nbElement);
   VALUE_HANDLE_INT(begIdx);
   int totalLookback;
   int emaLookback, rocLookback;
   ENUM_DECLARATION(RetCode) retCode;
   int nbElementToOutput;

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
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Adjust the startIdx to account for the lookback. */
   emaLookback   = LOOKBACK_CALL(EMA)( optInTimePeriod );
   rocLookback   = LOOKBACK_CALL(ROCR)( 1 );
   totalLookback = (emaLookback*3) + rocLookback;

   if( startIdx < totalLookback )
      startIdx = totalLookback;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   VALUE_HANDLE_DEREF(outBegIdx) = startIdx; 

   nbElementToOutput = (endIdx-startIdx)+1+totalLookback;

   /* Allocate a temporary buffer for performing
    * the calculation.
    */
   ARRAY_ALLOC(tempBuffer, nbElementToOutput );

   #if !defined( _JAVA ) && !defined( USE_SUBARRAY )
      if( !tempBuffer )
      {
         VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
         VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
      }
   #endif

   /* Calculate the first EMA */   
   k = PER_TO_K(optInTimePeriod);  
   retCode = FUNCTION_CALL(INT_EMA)( (startIdx-totalLookback), endIdx, inReal,
                                     optInTimePeriod, k,
                                     VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
								     tempBuffer );
   
   /* Verify for failure or if not enough data after
    * calculating the EMA.
    */
   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      ARRAY_FREE( tempBuffer );
      return retCode;
   }

   nbElementToOutput--; /* Make this variable zero base from now on. */

   /* Calculate the second EMA */   
   nbElementToOutput -= emaLookback;
   retCode = FUNCTION_CALL_DOUBLE(INT_EMA)( 0, nbElementToOutput, tempBuffer,
                                            optInTimePeriod, k,
                                            VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
						                    tempBuffer );
   
   /* Verify for failure or if not enough data after
    * calculating the EMA.
    */
   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      ARRAY_FREE( tempBuffer );
      return retCode;
   }

   /* Calculate the third EMA */   
   nbElementToOutput -= emaLookback;
   retCode = FUNCTION_CALL_DOUBLE(INT_EMA)( 0, nbElementToOutput, tempBuffer,
                                            optInTimePeriod, k,
                                            VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
						                    tempBuffer );
   
   /* Verify for failure or if not enough data after
    * calculating the EMA.
    */
   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      ARRAY_FREE( tempBuffer );
      return retCode;
   }

   /* Calculate the 1-day Rate-Of-Change */
   nbElementToOutput -= emaLookback;
   retCode = FUNCTION_CALL_DOUBLE(ROC)( 0, nbElementToOutput,
                                        tempBuffer,
                                        1,  VALUE_HANDLE_OUT(begIdx), outNBElement,
                                        outReal );

   ARRAY_FREE( tempBuffer );
   /* Verify for failure or if not enough data after
    * calculating the rate-of-change.
    */
   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_DEREF(outNBElement) == 0) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      return retCode;
   }

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::TrixStateInit( struct TA_Trix_State** _state,
/* Generated */                                  int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trixStateInit( struct TA_trix_State** _state,
/* Generated */                             int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX_StateInit( struct TA_TRIX_State** _state,
/* Generated */                                                   int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
 TA_RetCode retCode;
 double k;
#define TA_TRIX_SUPPRESS_MEMORY_ALLOCATION
/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_TRIX_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod = optInTimePeriod;
/* Generated */    MEM_SIZE_P = TA_TRIX_Lookback(optInTimePeriod );
/* Generated */    #ifndef TA_TRIX_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_TRIX_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */
   k = PER_TO_K(optInTimePeriod);
   retCode = FUNCTION_CALL_STATE_INIT(INT_EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA1, optInTimePeriod, k );
   if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE_INIT(INT_EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA2, optInTimePeriod, k );
   if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE_INIT(INT_EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA3, optInTimePeriod, k );
   if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE_INIT(ROC)( (struct TA_ROC_State**) &STATE_P.stateROC, 1);
   if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::TrixState( struct TA_Trix_State* _state,
/* Generated */                              cli::array<double>^ inReal,
/* Generated */                              cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trixState( struct TA_trix_State* _state,
/* Generated */                         double       inReal,
/* Generated */                         double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX_State( struct TA_TRIX_State* _state,
/* Generated */                                               const double inReal,
/* Generated */                                               double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
 #define TA_TRIX_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
 TA_RetCode retCode;
 double tempReal;
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_TRIX_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inReal,inReal);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
   retCode = FUNCTION_CALL_STATE(EMA)( (struct TA_EMA_State*)  STATE.stateEMA1, inReal, &tempReal );
   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE(EMA)( (struct TA_EMA_State*)  STATE.stateEMA2, tempReal, &tempReal );
   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE(EMA)( (struct TA_EMA_State*)  STATE.stateEMA3, tempReal, &tempReal );
   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   retCode = FUNCTION_CALL_STATE(ROC)( (struct TA_ROC_State*)  STATE.stateROC, tempReal, &tempReal );
   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;

   VALUE_HANDLE_DEREF(outReal) = tempReal;
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::TrixStateFree( struct TA_Trix_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trixStateFree( struct TA_trix_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX_StateFree( struct TA_TRIX_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
        TA_RetCode retCode;
        retCode = FUNCTION_CALL_STATE_FREE(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA1 );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_FREE(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA2 );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_FREE(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA3 );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_FREE(ROC)( (struct TA_ROC_State**) &STATE_P.stateROC );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
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
/* Generated */ Core::RetCode Core::TrixStateSave( struct TA_Trix_State* _state,
/* Generated */                                  FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trixStateSave( struct TA_trix_State* _state,
/* Generated */                             FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX_StateSave( struct TA_TRIX_State* _state,
/* Generated */                                                   FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
TA_RetCode retCode;
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
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_TRIX_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */    io_res = fwrite(&STATE.optInTimePeriod,sizeof(STATE.optInTimePeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    // Warning: STATE.stateEMA1 must be saved manually!
/* Generated */    // Warning: STATE.stateEMA2 must be saved manually!
/* Generated */    // Warning: STATE.stateEMA3 must be saved manually!
/* Generated */    // Warning: STATE.stateROC must be saved manually!
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/

   /* insert state save code here. */   
        retCode = FUNCTION_CALL_STATE_SAVE(EMA)( (struct TA_EMA_State*) STATE.stateEMA1, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_SAVE(EMA)( (struct TA_EMA_State*) STATE.stateEMA2, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_SAVE(EMA)( (struct TA_EMA_State*) STATE.stateEMA3, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_SAVE(ROC)( (struct TA_ROC_State*) STATE.stateROC, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   return 0;
}

/**** START GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::TrixStateLoad( struct TA_Trix_State** _state,
/* Generated */                                  FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trixStateLoad( struct TA_trix_State** _state,
/* Generated */                             FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_TRIX_StateLoad( struct TA_TRIX_State** _state,
/* Generated */                                                   FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
TA_RetCode retCode;
/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_TRIX_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_TRIX_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_TRIX_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */    io_res = fread(&STATE_P.optInTimePeriod,sizeof(STATE_P.optInTimePeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    // Warning: STATE_P.stateEMA1 must be loaded manually!
/* Generated */    // Warning: STATE_P.stateEMA2 must be loaded manually!
/* Generated */    // Warning: STATE_P.stateEMA3 must be loaded manually!
/* Generated */    // Warning: STATE_P.stateROC must be loaded manually!
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/

   /* insert state load code here. */   
        retCode = FUNCTION_CALL_STATE_LOAD(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA1, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_LOAD(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA2, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_LOAD(EMA)( (struct TA_EMA_State**) &STATE_P.stateEMA3, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
        retCode = FUNCTION_CALL_STATE_LOAD(ROC)( (struct TA_ROC_State**) &STATE_P.stateROC, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
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
/* Generated */ enum class Core::RetCode Core::Trix( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<float>^ inReal,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Trix( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<float>^ inReal,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode trix( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      float        inReal[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_TRIX( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const float  inReal[],
/* Generated */                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double k;
/* Generated */    ARRAY_REF(tempBuffer);
/* Generated */    VALUE_HANDLE_INT(nbElement);
/* Generated */    VALUE_HANDLE_INT(begIdx);
/* Generated */    int totalLookback;
/* Generated */    int emaLookback, rocLookback;
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */    int nbElementToOutput;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 30;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    emaLookback   = LOOKBACK_CALL(EMA)( optInTimePeriod );
/* Generated */    rocLookback   = LOOKBACK_CALL(ROCR)( 1 );
/* Generated */    totalLookback = (emaLookback*3) + rocLookback;
/* Generated */    if( startIdx < totalLookback )
/* Generated */       startIdx = totalLookback;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx; 
/* Generated */    nbElementToOutput = (endIdx-startIdx)+1+totalLookback;
/* Generated */    ARRAY_ALLOC(tempBuffer, nbElementToOutput );
/* Generated */    #if !defined( _JAVA ) && !defined( USE_SUBARRAY )
/* Generated */       if( !tempBuffer )
/* Generated */       {
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */       }
/* Generated */    #endif
/* Generated */    k = PER_TO_K(optInTimePeriod);  
/* Generated */    retCode = FUNCTION_CALL(INT_EMA)( (startIdx-totalLookback), endIdx, inReal,
/* Generated */                                      optInTimePeriod, k,
/* Generated */                                      VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
/* Generated */ 								     tempBuffer );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       ARRAY_FREE( tempBuffer );
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    nbElementToOutput--; 
/* Generated */    nbElementToOutput -= emaLookback;
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(INT_EMA)( 0, nbElementToOutput, tempBuffer,
/* Generated */                                             optInTimePeriod, k,
/* Generated */                                             VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
/* Generated */ 						                    tempBuffer );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       ARRAY_FREE( tempBuffer );
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    nbElementToOutput -= emaLookback;
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(INT_EMA)( 0, nbElementToOutput, tempBuffer,
/* Generated */                                             optInTimePeriod, k,
/* Generated */                                             VALUE_HANDLE_OUT(begIdx), VALUE_HANDLE_OUT(nbElement),
/* Generated */ 						                    tempBuffer );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || (VALUE_HANDLE_GET(nbElement) == 0) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       ARRAY_FREE( tempBuffer );
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    nbElementToOutput -= emaLookback;
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(ROC)( 0, nbElementToOutput,
/* Generated */                                         tempBuffer,
/* Generated */                                         1,  VALUE_HANDLE_OUT(begIdx), outNBElement,
/* Generated */                                         outReal );
/* Generated */    ARRAY_FREE( tempBuffer );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_DEREF(outNBElement) == 0) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

