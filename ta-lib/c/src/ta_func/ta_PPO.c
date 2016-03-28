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
 *  020605 AA   Fix #1117666 Lookback bug.
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
/* Generated */ int Core::PpoLookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                      int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                      MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoLookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                       int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                       MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                          int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                          TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   /* Lookback is driven by the slowest MA. */
   return LOOKBACK_CALL(MA)( max(optInSlowPeriod,optInFastPeriod), optInMAType );
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_PPO - Percentage Price Oscillator
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 * 
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 * 
 * optInMAType:
 *    Type of Moving Average
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Ppo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<double>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ppo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<double>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ppo( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     double       inReal[],
/* Generated */                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                     MAType        optInMAType,/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_PPO( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                                          const double inReal[],
/* Generated */                                          int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                          int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                          TA_MAType     optInMAType,/* Generated */                                          int          *outBegIdx,
/* Generated */                                          int          *outNBElement,
/* Generated */                                          double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
   ARRAY_REF(tempBuffer);
   ENUM_DECLARATION(RetCode) retCode;

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
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Allocate an intermediate buffer. */
   ARRAY_ALLOC( tempBuffer, endIdx-startIdx+1 );
   #if !defined( _JAVA )
      if( !tempBuffer )
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
   #endif

   retCode = FUNCTION_CALL(INT_PO)( startIdx, endIdx, inReal,
                                    optInFastPeriod,
                                    optInSlowPeriod,
                                    optInMAType,
                                    outBegIdx,
                                    outNBElement,
                                    outReal,
                                    tempBuffer,
                                    1 /* Do percentage processing. */ );

   ARRAY_FREE( tempBuffer );
   
   return retCode;
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::PpoStateInit( struct TA_Ppo_State** _state,
/* Generated */                       int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                       int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                       MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoStateInit( struct TA_ppo_State** _state,
/* Generated */                        int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                        int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                        MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_StateInit( struct TA_PPO_State** _state,
/* Generated */                                           int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                           int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                           TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
return FUNCTION_CALL_STATE_INIT(INT_PO)((struct TA_APO_State**)_state, optInFastPeriod, optInSlowPeriod, optInMAType, 1);

#ifdef SUPPRESS_UNNECESARY_CODE
/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_PPO_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInFastPeriod = optInFastPeriod;
/* Generated */    STATE_P.optInSlowPeriod = optInSlowPeriod;
/* Generated */    STATE_P.optInMAType = optInMAType;
/* Generated */    MEM_SIZE_P = TA_PPO_Lookback(optInFastPeriod, optInSlowPeriod, optInMAType );
/* Generated */    #ifndef TA_PPO_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_PPO_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
#endif
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::PpoState( struct TA_Ppo_State* _state,
/* Generated */                   cli::array<double>^ inReal,
/* Generated */                   cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoState( struct TA_ppo_State* _state,
/* Generated */                    double       inReal,
/* Generated */                    double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_State( struct TA_PPO_State* _state,
/* Generated */                                       const double inReal,
/* Generated */                                       double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
  return FUNCTION_CALL_STATE(APO)((struct TA_APO_State*)_state, inReal, outReal);
#ifdef SUPPRESS_UNNECESARY_CODE
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
/* Generated */    #ifndef TA_PPO_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
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

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
#endif
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::PpoStateFree( struct TA_Ppo_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoStateFree( struct TA_ppo_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_StateFree( struct TA_PPO_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
  return FUNCTION_CALL_STATE_FREE(APO)((struct TA_APO_State**)_state);
#ifdef SUPPRESS_UNNECESARY_CODE
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
#endif
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::PpoStateSave( struct TA_Ppo_State* _state,
/* Generated */                       FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoStateSave( struct TA_ppo_State* _state,
/* Generated */                        FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_StateSave( struct TA_PPO_State* _state,
/* Generated */                                           FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
return FUNCTION_CALL_STATE_SAVE(APO)((struct TA_APO_State**)_state, _file);
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
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_PPO_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */    io_res = fwrite(&STATE.optInFastPeriod,sizeof(STATE.optInFastPeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.optInSlowPeriod,sizeof(STATE.optInSlowPeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.optInMAType,sizeof(STATE.optInMAType),1,_file);
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
/* Generated */ int Core::PpoStateLoad( struct TA_Ppo_State** _state,
/* Generated */                       FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ppoStateLoad( struct TA_ppo_State** _state,
/* Generated */                        FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PPO_StateLoad( struct TA_PPO_State** _state,
/* Generated */                                           FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
return FUNCTION_CALL_STATE_LOAD(APO)((struct TA_APO_State**)_state, _file);
/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_PPO_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_PPO_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_PPO_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */    io_res = fread(&STATE_P.optInFastPeriod,sizeof(STATE_P.optInFastPeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.optInSlowPeriod,sizeof(STATE_P.optInSlowPeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.optInMAType,sizeof(STATE_P.optInMAType),1,_file);
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
/* Generated */ enum class Core::RetCode Core::Ppo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<float>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ppo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<float>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ppo( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     float        inReal[],
/* Generated */                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                     MAType        optInMAType,/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_PPO( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inReal[],
/* Generated */                      int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                      int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                      TA_MAType     optInMAType,/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ARRAY_REF(tempBuffer);
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInFastPeriod = 12;
/* Generated */     else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInSlowPeriod = 26;
/* Generated */     else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */        optInMAType = (TA_MAType)0;
/* Generated */     else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    ARRAY_ALLOC( tempBuffer, endIdx-startIdx+1 );
/* Generated */    #if !defined( _JAVA )
/* Generated */       if( !tempBuffer )
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */    #endif
/* Generated */    retCode = FUNCTION_CALL(INT_PO)( startIdx, endIdx, inReal,
/* Generated */                                     optInFastPeriod,
/* Generated */                                     optInSlowPeriod,
/* Generated */                                     optInMAType,
/* Generated */                                     outBegIdx,
/* Generated */                                     outNBElement,
/* Generated */                                     outReal,
/* Generated */                                     tempBuffer,
/* Generated */                                     1  );
/* Generated */    ARRAY_FREE( tempBuffer );
/* Generated */    return retCode;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

