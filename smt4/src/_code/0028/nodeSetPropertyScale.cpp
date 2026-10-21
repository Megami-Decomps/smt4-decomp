#include "common.h"

struct NodeScaleProperty {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 value;
};

struct NodeScalePropertyTable {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ NodeScaleProperty** values;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ u32 columns;

    NodeScaleProperty* at(u32 row, u32 column)
    {
        return values[row * columns + column];
    }
};

struct NodeScaleObject {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ NodeScalePropertyTable* properties;
    /* 0x02C */ u8 unk02c[0x11c];
    /* 0x148 */ u32 propertyEnabled;
    /* 0x14C */ u32 propertyRow;

    NodeScaleProperty* getProperty(u32 column)
    {
        if (propertyEnabled == 0) {
            return NULL;
        }
        return properties->at(propertyRow, column);
    }
};

struct NodeScaleWork {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ NodeScaleObject* object;
    /* 0x30 */ u8 unk30[0x28];
    /* 0x58 */ s32 count;
    /* 0x5C */ u8 unk5c[0x18];
    /* 0x74 */ f32 base;
    /* 0x78 */ u8 unk78[4];
    /* 0x7C */ f32 current;
};

// Update the node's scalar property when the corresponding channel exists.
extern "C" void nodeSetPropertyScale(NodeScaleWork* work, f32 scale)
{
    if (work->count > 0) {
        work->current = scale;
        f32 value = work->base * scale;
        NodeScaleProperty* property = work->object->getProperty(0);
        if (property != NULL) {
            property->value = value;
        }
    }
}
