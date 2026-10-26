#pragma once
#include "common.h"

/* Functions in the 0x00210000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Matrix44View;
struct Vector3View;
struct ModelOwner;
extern "C" {

void matrixInitializeWithScaleAndOffset(Matrix44View* matrix, const Vector3View* offset, const Matrix44View* source, f32 scale);

void FUN_00210194(ModelOwner *owner, f32 time);

} /* extern "C" */
