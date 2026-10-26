#include "common.h"
#include "code/Code0016_Smt4a.h"

extern "C" {

typedef struct Element {
    /* 0x00 */ u8 data[0x30];
} Element;

typedef struct Vector {
    /* 0x00 */ Element *begin;
    /* 0x04 */ Element *end;
} Vector;

/* Pulls the end back by the vector's size in elements. */
void vectorClear(Vector *vector)
{
    Element *end;

    end = vector->end;
    if (vector->begin != end) {
        vector->end = end - (end - vector->begin);
    }
}

} /* extern "C" */
