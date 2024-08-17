/*
 * GATING_SIGNALS.c
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

#include "GATING_SIGNALS.h"
#include "rtwtypes.h"
#include "GATING_SIGNALS_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include <string.h>

/* Block signals (default storage) */
B_GATING_SIGNALS_T GATING_SIGNALS_B;

/* Block states (default storage) */
DW_GATING_SIGNALS_T GATING_SIGNALS_DW;

/* Real-time model */
static RT_MODEL_GATING_SIGNALS_T GATING_SIGNALS_M_;
RT_MODEL_GATING_SIGNALS_T *const GATING_SIGNALS_M = &GATING_SIGNALS_M_;
static void rate_scheduler(void);
real_T look1_pbinlxpw(real_T u0, const real_T bp0[], const real_T table[],
                      uint32_T prevIndex[], uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'on'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'on'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T found;
    uint32_T iLeft;
    uint32_T iRght;

    /* Binary Search using Previous Index */
    bpIdx = prevIndex[0U];
    iLeft = 0U;
    iRght = maxIndex;
    found = 0U;
    while (found == 0U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx - 1U;
        bpIdx = ((bpIdx + iLeft) - 1U) >> 1U;
      } else if (u0 < bp0[bpIdx + 1U]) {
        found = 1U;
      } else {
        iLeft = bpIdx + 1U;
        bpIdx = ((bpIdx + iRght) + 1U) >> 1U;
      }
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  prevIndex[0U] = bpIdx;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[bpIdx];
  return (table[bpIdx + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   *
   * Sample time offsets are handled by priming the counter with the
   * appropriate non-zero value in the model initialize function.
   */
  (GATING_SIGNALS_M->Timing.TaskCounters.TID[2])++;
  if ((GATING_SIGNALS_M->Timing.TaskCounters.TID[2]) > 5) {/* Sample time: [5.0E-5s, 2.5E-5s] */
    GATING_SIGNALS_M->Timing.TaskCounters.TID[2] = 0;
  }

  (GATING_SIGNALS_M->Timing.TaskCounters.TID[3])++;
  if ((GATING_SIGNALS_M->Timing.TaskCounters.TID[3]) > 399) {
             /* Sample time: [0.0033333333333333335s, 0.0016666666666666668s] */
    GATING_SIGNALS_M->Timing.TaskCounters.TID[3] = 0;
  }
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void GATING_SIGNALS_step(void)
{
  real_T rtb_Add3_h;

  /* Lookup_n-D: '<S19>/1-D Lookup Table' incorporates:
   *  Clock: '<S19>/Clock'
   *  Constant: '<S19>/Constant3'
   *  Constant: '<S19>/Constant4'
   *  Gain: '<S19>/1\ib1'
   *  Math: '<S19>/Math Function'
   *  Sum: '<S19>/Add1'
   */
  rtb_Add3_h = look1_pbinlxpw(rt_remd_snf(GATING_SIGNALS_M->Timing.t[0] +
    GATING_SIGNALS_P.Constant3_Value, GATING_SIGNALS_P.Constant4_Value) *
    GATING_SIGNALS_P.uib1_Gain, GATING_SIGNALS_P.uDLookupTable_bp01Data,
    GATING_SIGNALS_P.uDLookupTable_tableData, &GATING_SIGNALS_DW.m_bpIndex, 2U);

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<S19>/Constant2'
   *  Gain: '<Root>/Gain4'
   *  Sin: '<Root>/Sine Wave'
   *  Sum: '<Root>/Add'
   *  Sum: '<S19>/Add3'
   */
  GATING_SIGNALS_B.Gain = ((sin(GATING_SIGNALS_P.SineWave_Freq *
    GATING_SIGNALS_M->Timing.t[0] + GATING_SIGNALS_P.SineWave_Phase) *
    GATING_SIGNALS_P.SineWave_Amp + GATING_SIGNALS_P.SineWave_Bias) +
    (rtb_Add3_h - GATING_SIGNALS_P.Constant2_Value) *
    GATING_SIGNALS_P.Gain4_Gain) * GATING_SIGNALS_P.Gain_Gain;

  /* Lookup_n-D: '<S18>/1-D Lookup Table' incorporates:
   *  Clock: '<S18>/Clock'
   *  Constant: '<S18>/Constant3'
   *  Constant: '<S18>/Constant4'
   *  Gain: '<S18>/1\ib1'
   *  Math: '<S18>/Math Function'
   *  Sum: '<S18>/Add1'
   */
  rtb_Add3_h = look1_pbinlxpw(rt_remd_snf(GATING_SIGNALS_M->Timing.t[0] +
    GATING_SIGNALS_P.Constant3_Value_c, GATING_SIGNALS_P.Constant4_Value_b) *
    GATING_SIGNALS_P.uib1_Gain_l, GATING_SIGNALS_P.uDLookupTable_bp01Data_c,
    GATING_SIGNALS_P.uDLookupTable_tableData_b, &GATING_SIGNALS_DW.m_bpIndex_l,
    2U);

  /* Gain: '<S1>/Gain' incorporates:
   *  Constant: '<S18>/Constant2'
   *  Gain: '<S1>/Gain1'
   *  Gain: '<S1>/Gain2'
   *  Gain: '<S1>/Gain3'
   *  Sum: '<S18>/Add3'
   */
  rtb_Add3_h = (rtb_Add3_h - GATING_SIGNALS_P.Constant2_Value_j) *
    GATING_SIGNALS_P.g;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   */
  GATING_SIGNALS_B.Add = 3.0 * GATING_SIGNALS_P.g + rtb_Add3_h;

  /* Sum: '<S1>/Add1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  GATING_SIGNALS_B.Add1 = rtb_Add3_h + GATING_SIGNALS_P.g;

  /* Sum: '<S1>/Add3' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  GATING_SIGNALS_B.Add3 = rtb_Add3_h - GATING_SIGNALS_P.g;

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  GATING_SIGNALS_B.Add2 = -3.0 * GATING_SIGNALS_P.g + rtb_Add3_h;

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Sum: '<S1>/Add4'
   */
  GATING_SIGNALS_B.Compare = (GATING_SIGNALS_B.Gain - GATING_SIGNALS_B.Add >=
    GATING_SIGNALS_P.Constant_Value);

  /* Logic: '<S1>/NOT' */
  GATING_SIGNALS_B.NOT = !GATING_SIGNALS_B.Compare;

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   *  Sum: '<S1>/Add5'
   */
  GATING_SIGNALS_B.Compare_o = (GATING_SIGNALS_B.Gain - GATING_SIGNALS_B.Add1 >=
    GATING_SIGNALS_P.Constant_Value_m);

  /* Logic: '<S1>/NOT1' */
  GATING_SIGNALS_B.NOT1 = !GATING_SIGNALS_B.Compare_o;

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   *  Sum: '<S1>/Add6'
   */
  GATING_SIGNALS_B.Compare_e = (GATING_SIGNALS_B.Gain - GATING_SIGNALS_B.Add3 >=
    GATING_SIGNALS_P.Constant_Value_e);

  /* Logic: '<S1>/NOT2' */
  GATING_SIGNALS_B.NOT2 = !GATING_SIGNALS_B.Compare_e;

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Constant: '<S9>/Constant'
   *  Sum: '<S1>/Add7'
   */
  GATING_SIGNALS_B.Compare_l = (GATING_SIGNALS_B.Gain - GATING_SIGNALS_B.Add2 >=
    GATING_SIGNALS_P.Constant_Value_k);

  /* Logic: '<S1>/NOT3' */
  GATING_SIGNALS_B.NOT3 = !GATING_SIGNALS_B.Compare_l;

  /* Matfile logging */
  rt_UpdateTXYLogVars(GATING_SIGNALS_M->rtwLogInfo, (GATING_SIGNALS_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(GATING_SIGNALS_M)!=-1) &&
        !((rtmGetTFinal(GATING_SIGNALS_M)-GATING_SIGNALS_M->Timing.t[0]) >
          GATING_SIGNALS_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(GATING_SIGNALS_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++GATING_SIGNALS_M->Timing.clockTick0)) {
    ++GATING_SIGNALS_M->Timing.clockTickH0;
  }

  GATING_SIGNALS_M->Timing.t[0] = GATING_SIGNALS_M->Timing.clockTick0 *
    GATING_SIGNALS_M->Timing.stepSize0 + GATING_SIGNALS_M->Timing.clockTickH0 *
    GATING_SIGNALS_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [8.3333333333333337E-6s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 8.3333333333333337E-6, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    GATING_SIGNALS_M->Timing.clockTick1++;
    if (!GATING_SIGNALS_M->Timing.clockTick1) {
      GATING_SIGNALS_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void GATING_SIGNALS_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)GATING_SIGNALS_M, 0,
                sizeof(RT_MODEL_GATING_SIGNALS_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&GATING_SIGNALS_M->solverInfo,
                          &GATING_SIGNALS_M->Timing.simTimeStep);
    rtsiSetTPtr(&GATING_SIGNALS_M->solverInfo, &rtmGetTPtr(GATING_SIGNALS_M));
    rtsiSetStepSizePtr(&GATING_SIGNALS_M->solverInfo,
                       &GATING_SIGNALS_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&GATING_SIGNALS_M->solverInfo, (&rtmGetErrorStatus
      (GATING_SIGNALS_M)));
    rtsiSetRTModelPtr(&GATING_SIGNALS_M->solverInfo, GATING_SIGNALS_M);
  }

  rtsiSetSimTimeStep(&GATING_SIGNALS_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&GATING_SIGNALS_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(GATING_SIGNALS_M, &GATING_SIGNALS_M->Timing.tArray[0]);
  rtmSetTFinal(GATING_SIGNALS_M, 10.0);
  GATING_SIGNALS_M->Timing.stepSize0 = 8.3333333333333337E-6;

  /* initialize sample time offsets */
  GATING_SIGNALS_M->Timing.TaskCounters.TID[2] = 3;/* Sample time: [5.0E-5s, 2.5E-5s] */

  /* initialize sample time offsets */
  GATING_SIGNALS_M->Timing.TaskCounters.TID[3] = 200;
             /* Sample time: [0.0033333333333333335s, 0.0016666666666666668s] */

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    GATING_SIGNALS_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(GATING_SIGNALS_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(GATING_SIGNALS_M->rtwLogInfo, (NULL));
    rtliSetLogT(GATING_SIGNALS_M->rtwLogInfo, "tout");
    rtliSetLogX(GATING_SIGNALS_M->rtwLogInfo, "");
    rtliSetLogXFinal(GATING_SIGNALS_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(GATING_SIGNALS_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(GATING_SIGNALS_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(GATING_SIGNALS_M->rtwLogInfo, 0);
    rtliSetLogDecimation(GATING_SIGNALS_M->rtwLogInfo, 1);
    rtliSetLogY(GATING_SIGNALS_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(GATING_SIGNALS_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(GATING_SIGNALS_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &GATING_SIGNALS_B), 0,
                sizeof(B_GATING_SIGNALS_T));

  /* states (dwork) */
  (void) memset((void *)&GATING_SIGNALS_DW, 0,
                sizeof(DW_GATING_SIGNALS_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(GATING_SIGNALS_M->rtwLogInfo, 0.0,
    rtmGetTFinal(GATING_SIGNALS_M), GATING_SIGNALS_M->Timing.stepSize0,
    (&rtmGetErrorStatus(GATING_SIGNALS_M)));
}

/* Model terminate function */
void GATING_SIGNALS_terminate(void)
{
  /* (no terminate code required) */
}
