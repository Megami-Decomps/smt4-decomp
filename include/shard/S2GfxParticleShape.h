/* nw::gfx particle-shape resource and the memory-size calculator its buffer sizing uses. */
#ifndef S2_GFX_PARTICLE_SHAPE_H
#define S2_GFX_PARTICLE_SHAPE_H

#include "common.h"

/* Accumulates the size and alignment a set of allocations needs. */
typedef struct SizeCalculator {
    /* 0x00 */ u32 size;
    /* 0x04 */ u32 alignment;     /* alignment currently in force */
    /* 0x08 */ u32 maxAlignment;  /* largest alignment seen */
} SizeCalculator;

/* A self-relative pointer: the offset is from the field's own address; 0 means NULL. */
typedef struct RelativeOffset {
    /* 0x0 */ s32 offset;
} RelativeOffset;

/* The pointed-to address of a relative offset, or NULL. */
static __inline void *relativeOffsetTarget(RelativeOffset *field)
{
    return field->offset != 0 ? (u8 *)field + field->offset : NULL;
}

/* A vertex attribute description. */
typedef struct ParticleAttribute {
    /* 0x00 */ u32 kind;          /* 0x40000000 marks an unused entry */
    /* 0x04 */ u32 componentType; /* selects the stream's component count */
} ParticleAttribute;

/* The list of vertex attributes of a particle shape. */
typedef struct ParticleAttributeList {
    /* 0x00 */ u32 vertexCount;
    /* 0x04 */ u32 attributeCount;
    /* 0x08 */ RelativeOffset attributes[1]; /* attributeCount relative offsets to ParticleAttribute */
} ParticleAttributeList;

/* ResParticleShape: only the attribute-list offset is read. */
typedef struct ResParticleShape {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ RelativeOffset attributeList;
} ResParticleShape;

#endif
