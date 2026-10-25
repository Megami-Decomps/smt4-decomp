/* NON_MATCHING: this is std::vector<12-byte element>::clear/reserve/push_back around a stream read (onlineResultsClear/00134338/0030d358/0013425c are its STL instantiations); written with the callees as plain functions, built has a 24-byte frame and a rotated loop where retail has a 16-byte frame, re-reads the count each iteration and tests the stream flag in the loop condition */
#include "common.h"

extern "C" {

struct Stream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 failed;
};

struct Element {
    /* 0x00 */ u32 words[3];
};

struct ElementVector {
    /* 0x00 */ Element *begin;
    /* 0x04 */ Element *end;
    /* 0x08 */ Element *capacity;
};

void onlineResultsClear(ElementVector *vector);
s32 streamReadU32(Stream *stream, u32 *value);
void FUN_00134338(ElementVector *vector, u32 count);
void FUN_002e9ff4(Element *element);
void FUN_00310ff2(Stream *stream, Element *element);
void FUN_0030d358(ElementVector *vector, Element *position, const Element *value);
void FUN_0013425c(ElementVector *vector, Element *position, const Element *value);

/* Reads a counted array of elements from the stream into the vector, stopping at the first stream failure. */
void FUN_00304d92(Stream *stream, ElementVector *vector)
{
    Element element;
    u32 count;
    u32 i;

    onlineResultsClear(vector);
    if (streamReadU32(stream, &count) == 0) {
        return;
    }
    FUN_00134338(vector, count);
    for (i = 0; i < count; i++) {
        if (stream->failed) {
            return;
        }
        FUN_002e9ff4(&element);
        FUN_00310ff2(stream, &element);
        if (stream->failed) {
            onlineResultsClear(vector);
            return;
        }
        if (vector->end != vector->capacity) {
            Element *position = vector->end;
            vector->end = position + 1;
            FUN_0030d358(vector, position, &element);
        } else {
            FUN_0013425c(vector, vector->end, &element);
        }
    }
}

} /* extern "C" */
