/*
 * GATING_SIGNALS.h
 *
 * Code generation for model "GATING_SIGNALS".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Fri Aug  2 15:39:22 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GATING_SIGNALS_h_
#define RTW_HEADER_GATING_SIGNALS_h_
#ifndef GATING_SIGNALS_COMMON_INCLUDES_
#define GATING_SIGNALS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* GATING_SIGNALS_COMMON_INCLUDES_ */

#include "GATING_SIGNALS_types.h"
#include "rtGetInf.h"
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Add;                          /* '<S1>/Add' */
  real_T Add1;                         /* '<S1>/Add1' */
  real_T Add3;                         /* '<S1>/Add3' */
  real_T Add2;                         /* '<S1>/Add2' */
  boolean_T Compare;                   /* '<S6>/Compare' */
  boolean_T NOT;                       /* '<S1>/NOT' */
  boolean_T Compare_o;                 /* '<S7>/Compare' */
  boolean_T NOT1;                      /* '<S1>/NOT1' */
  boolean_T Compare_e;                 /* '<S8>/Compare' */
  boolean_T NOT2;                      /* '<S1>/NOT2' */
  boolean_T Compare_l;                 /* '<S9>/Compare' */
  boolean_T NOT3;                      /* '<S1>/NOT3' */
} B_GATING_SIGNALS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T m_bpIndex;                  /* '<S19>/1-D Lookup Table' */
  uint32_T m_bpIndex_l;                /* '<S18>/1-D Lookup Table' */
} DW_GATING_SIGNALS_T;

/* Parameters (default storage) */
struct P_GATING_SIGNALS_T_ {
  real_T g;                            /* Variable: g
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/Constant1'
                                        *   '<S1>/Constant2'
                                        *   '<S1>/Constant3'
                                        *   '<S1>/Gain'
                                        *   '<S1>/Gain1'
                                        *   '<S1>/Gain2'
                                        *   '<S1>/Gain3'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T SineWave_Amp;                 /* Expression: 1.92
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 2*50*pi
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Constant3_Value;              /* Expression: sps.Delay
                                        * Referenced by: '<S19>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: sps.Period
                                        * Referenced by: '<S19>/Constant4'
                                        */
  real_T uib1_Gain;                    /* Expression: sps.Freq
                                        * Referenced by: '<S19>/1\ib1'
                                        */
  real_T uDLookupTable_tableData[3];   /* Expression: [0 2 0]
                                        * Referenced by: '<S19>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[3];    /* Expression: [0 .5 1]
                                        * Referenced by: '<S19>/1-D Lookup Table'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S19>/Constant2'
                                        */
  real_T Gain4_Gain;                   /* Expression: .294
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Gain_Gain;                    /* Expression: .84
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant3_Value_c;            /* Expression: sps.Delay
                                        * Referenced by: '<S18>/Constant3'
                                        */
  real_T Constant4_Value_b;            /* Expression: sps.Period
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T uib1_Gain_l;                  /* Expression: sps.Freq
                                        * Referenced by: '<S18>/1\ib1'
                                        */
  real_T uDLookupTable_tableData_b[3]; /* Expression: [0 2 0]
                                        * Referenced by: '<S18>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_c[3];  /* Expression: [0 .5 1]
                                        * Referenced by: '<S18>/1-D Lookup Table'
                                        */
  real_T Constant2_Value_j;            /* Expression: 1
                                        * Referenced by: '<S18>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_GATING_SIGNALS_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
extern P_GATING_SIGNALS_T GATING_SIGNALS_P;

/* Block signals (default storage) */
extern B_GATING_SIGNALS_T GATING_SIGNALS_B;

/* Block states (default storage) */
extern DW_GATING_SIGNALS_T GATING_SIGNALS_DW;

/* Model entry point functions */
extern void GATING_SIGNALS_initialize(void);
extern void GATING_SIGNALS_step(void);
extern void GATING_SIGNALS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GATING_SIGNALS_T *const GATING_SIGNALS_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'GATING_SIGNALS'
 * '<S1>'   : 'GATING_SIGNALS/Subsystem'
 * '<S2>'   : 'GATING_SIGNALS/Subsystem1'
 * '<S3>'   : 'GATING_SIGNALS/Subsystem2'
 * '<S4>'   : 'GATING_SIGNALS/Triangle Generator'
 * '<S5>'   : 'GATING_SIGNALS/Triangle Generator2'
 * '<S6>'   : 'GATING_SIGNALS/Subsystem/Compare To Zero1'
 * '<S7>'   : 'GATING_SIGNALS/Subsystem/Compare To Zero2'
 * '<S8>'   : 'GATING_SIGNALS/Subsystem/Compare To Zero3'
 * '<S9>'   : 'GATING_SIGNALS/Subsystem/Compare To Zero4'
 * '<S10>'  : 'GATING_SIGNALS/Subsystem1/Compare To Zero1'
 * '<S11>'  : 'GATING_SIGNALS/Subsystem1/Compare To Zero2'
 * '<S12>'  : 'GATING_SIGNALS/Subsystem1/Compare To Zero3'
 * '<S13>'  : 'GATING_SIGNALS/Subsystem1/Compare To Zero4'
 * '<S14>'  : 'GATING_SIGNALS/Subsystem2/Compare To Zero1'
 * '<S15>'  : 'GATING_SIGNALS/Subsystem2/Compare To Zero2'
 * '<S16>'  : 'GATING_SIGNALS/Subsystem2/Compare To Zero3'
 * '<S17>'  : 'GATING_SIGNALS/Subsystem2/Compare To Zero4'
 * '<S18>'  : 'GATING_SIGNALS/Triangle Generator/Model'
 * '<S19>'  : 'GATING_SIGNALS/Triangle Generator2/Model'
 */
#endif                                 /* RTW_HEADER_GATING_SIGNALS_h_ */
