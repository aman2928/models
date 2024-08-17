/*
 * GATING_SIGNALS_data.c
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

/* Block parameters (default storage) */
P_GATING_SIGNALS_T GATING_SIGNALS_P = {
  /* Variable: g
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
  0.25,

  /* Expression: 0
   * Referenced by: '<S6>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S9>/Constant'
   */
  0.0,

  /* Expression: 1.92
   * Referenced by: '<Root>/Sine Wave'
   */
  1.92,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: 2*50*pi
   * Referenced by: '<Root>/Sine Wave'
   */
  314.15926535897933,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: sps.Delay
   * Referenced by: '<S19>/Constant3'
   */
  0.001666666666666667,

  /* Expression: sps.Period
   * Referenced by: '<S19>/Constant4'
   */
  0.0066666666666666671,

  /* Expression: sps.Freq
   * Referenced by: '<S19>/1\ib1'
   */
  150.0,

  /* Expression: [0 2 0]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 0.0, 2.0, 0.0 },

  /* Expression: [0 .5 1]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 0.0, 0.5, 1.0 },

  /* Expression: 1
   * Referenced by: '<S19>/Constant2'
   */
  1.0,

  /* Expression: .294
   * Referenced by: '<Root>/Gain4'
   */
  0.294,

  /* Expression: .84
   * Referenced by: '<Root>/Gain'
   */
  0.84,

  /* Expression: sps.Delay
   * Referenced by: '<S18>/Constant3'
   */
  2.5000000000000005E-5,

  /* Expression: sps.Period
   * Referenced by: '<S18>/Constant4'
   */
  0.0001,

  /* Expression: sps.Freq
   * Referenced by: '<S18>/1\ib1'
   */
  10000.0,

  /* Expression: [0 2 0]
   * Referenced by: '<S18>/1-D Lookup Table'
   */
  { 0.0, 2.0, 0.0 },

  /* Expression: [0 .5 1]
   * Referenced by: '<S18>/1-D Lookup Table'
   */
  { 0.0, 0.5, 1.0 },

  /* Expression: 1
   * Referenced by: '<S18>/Constant2'
   */
  1.0
};
