/* The AOC shop's catalog queries (smt4a 0x4757xx-0x4767xx): what a query asks the online service for and the
 * job the worker thread runs it for. */
#ifndef ADDON_AOCCATALOGQUERY_H
#define ADDON_AOCCATALOGQUERY_H

#include "common.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include <stddef.h>

/* How a catalog query sorts its entries: three 0x40-byte strings. */
struct AocCatalogSort {
    /* 0x00 */ char order[0x40];      /* "ascending" */
    /* 0x40 */ char attribute[0x40];  /* the attribute to sort by */
    /* 0x80 */ char type[0x40];       /* how to compare it: "integer" */
};

/* A catalog query (0x34 bytes; aocCatalogQueryInit clears it and stores its work buffer). */
struct AocCatalogQuery {
    /* Empty and out of line (smt4 0x352f10, smt4a 0x4279d0, right after AocBufferRequest's destructor): armlink
     * removed every call, leaving the catalog jobs' `mov r0, <query>; nop` before each return. */
    ~AocCatalogQuery();

    /* 0x00 */ AocAttributeName *attributes;  /* the attributes to return */
    /* 0x04 */ u32 attributeCount;
    /* 0x08 */ char *filter;                  /* an optional filter, filterCount entries */
    /* 0x0C */ u32 filterCount;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ AocCatalogSort *sort;
    /* 0x1C */ u8 unk1C[0xC];
    /* 0x28 */ u8 sorted;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ void *buffer;                  /* work buffer for the request text */
    /* 0x30 */ u32 bufferBytes;
};

/* The worker's catalog job: its translated result and the day it ran. */
struct AocCatalogJob {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ WindowStatusResult result;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 today;                     /* days since 2000-01-01 (nn::fnd::DateTime::DateToDays) */
};

extern "C" {
/* The 0x40-byte message label of item attribute `field` for the entry the two table indices name
 * ("NA_NAME_<group>_<item>"). It is returned by value: retail's callers give the result one compiler temporary and
 * copy it into place, and the definition copies the start of its text buffer into the result. */
AocAttributeName aocItemAttributeLabel(u32 field, u32 groupIndex, u32 itemIndex);
/* IV's aocItemAttributeLabel. */
AocAttributeName aocItemAttributeLabel(u32 field, u32 groupIndex, u32 itemIndex);
}

typedef char AocCatalogQueryLayoutCheck[sizeof(AocCatalogSort) == 0xC0 && sizeof(AocCatalogQuery) == 0x34 &&
    offsetof(AocCatalogQuery, sort) == 0x18 && offsetof(AocCatalogQuery, sorted) == 0x28 &&
    offsetof(AocCatalogQuery, buffer) == 0x2C && offsetof(AocCatalogJob, result) == 0xC &&
    offsetof(AocCatalogJob, today) == 0x18 ? 1 : -1];

#endif
