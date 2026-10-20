/* Stores a clamped size pair into the record that starts at the object's +0xC; the mode picks the field pair. */
#include "common.h"

extern "C" {

typedef struct SizeRecord {
    /* 0x00 */ s16 widthA;
    /* 0x02 */ s16 widthB;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ s16 heightA;
    /* 0x08 */ s16 heightB;
    /* 0x0A */ s16 heightC;
    /* 0x0C */ u8 mode;
} SizeRecord;

void nn_hid_CTR_AnalogStickClamper_SetClampParamImpl(SizeRecord *record, int width, int height)
{
    if (height > 145) {
        height = 145;
    }
    if (record->mode == 0) {
        if (width < 40) {
            width = 40;
        }
        record->widthA = width;
        record->heightA = height;
    } else if (record->mode != 1) {
        record->heightC = height;
    } else {
        if (width < 36) {
            width = 36;
        }
        record->widthB = width;
        record->heightB = height;
    }
}

}
