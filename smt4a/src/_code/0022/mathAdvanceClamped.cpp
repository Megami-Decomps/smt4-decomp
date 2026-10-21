#include "common.h"
extern "C" {
/* Advance toward the directional limit without passing it. */
void mathAdvanceClamped(f32 *value,f32 step,f32 limit) { f32 next=*value+step; if (step>=0.0f) { if (next>limit) next=limit; } else { if (next<limit) next=limit; } *value=next; }
}
