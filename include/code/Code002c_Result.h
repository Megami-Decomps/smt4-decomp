#pragma once
#include "common.h"
#include "nn/Result.h"

/* Functions in the 0x002c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Acquires another reference of the srv: service, or opens it on the first use. */
nn::Result FUN_002c1398();

} /* extern "C" */
