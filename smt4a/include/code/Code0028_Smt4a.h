#pragma once
#include "common.h"

/* Functions in the 0x00280000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct RenderInitialState;
struct DataTable25Record;
struct Entry;
struct Matrix44;
extern "C" {

s32 FUN_00281024(RenderInitialState *state);

DataTable25Record * FUN_00283498(u32 id);

void FUN_00284f70(void);

Entry * FUN_0028cb6c(void);

void matrix43Multiply(Matrix44 *out, const Matrix44 *a, const Matrix44 *b);

s32 FUN_002857b8(void);

} /* extern "C" */
