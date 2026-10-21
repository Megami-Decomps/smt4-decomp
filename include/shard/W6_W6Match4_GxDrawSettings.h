#ifndef SHARD_W6_W6MATCH4_GXDRAWSETTINGS_H
#define SHARD_W6_W6MATCH4_GXDRAWSETTINGS_H

#include "common.h"

struct GxDrawSettings {
    u8 enabled; // 0x00
    union {
        u8 unk01[0x2f];
        struct {
            u8 unk01[2];
            u8 sourceFactor;      // 0x03
            u8 destinationFactor; // 0x04
            u8 colorEquation;     // 0x05
            u8 alphaEquation;     // 0x06
            u8 unk07[9];
            u8 logicEnabled;      // 0x10
            u8 logicOperation;    // 0x11
            u8 unk12[6];
            u8 overrideAccess;    // 0x18
            u8 unk19[0x17];
        } fragment;
    };
    u8 alphaEnabled; // 0x30
    u8 alphaReference; // 0x31
    u8 alphaFunction; // 0x32
    union {
        u8 unk33[0x21];
        struct {
            u8 unk33[5];
            u8 stencilEnabled; // 0x38
            u8 stencilWrite;   // 0x39
            u8 unk3a[0x16];
            u8 colorWriteMask; // 0x50
            u8 unk51[3];
        } buffers;
    };
    u8 depthEnabled; // 0x54
    u8 depthWrite; // 0x55
    u8 depthFunction; // 0x56
    u8 unk57[5];
    u8 outputEnabled; // 0x5c
    u8 unk5d[0x23];
};

#endif
