/* NON_MATCHING: parser context/end pointers occupy different frame slots and error constant loads at exit. */
#include "ui/FormattedNumericEntry.h"

extern "C" {
s32 FUN_001029f4(const char *text, char **end, s32 base);
s32 FUN_00102bbc(char *destination, const u16 *source, u32 size);
char *libc_strtok(char *text, const char *delimiters, char **context);
void FUN_0043bd0c(u16 *destination, u32 size, u32 format, s32 integral, s32 fraction);
s32 stringFormatBounded(char *destination, u32 size, const char *format, ...);
char *strncpy(char *destination, const char *source, u32 size);
u32 wstrlen(const char *text);
extern const char DAT_00536ccc[];
extern const char DAT_00536cd0[];
extern const NumericFractionDefaults DAT_00536cd4;
extern const char DAT_00536cdc[];

/* Parse two nonnegative numeric components and format the entry's display value. */
u32 FUN_004285d4(FormattedNumericEntry *entry, const char *text, const NumericEntryFormat *format)
{
    char buffer[32];
    strncpy(buffer, text, sizeof(buffer));
    buffer[31] = 0;
    char *context;
    char *integralText = libc_strtok(buffer, DAT_00536ccc, &context);
    char *fractionText = libc_strtok(NULL, DAT_00536ccc, &context);
    char *end;
    s32 integral = FUN_001029f4(integralText, &end, 10);
    if (*end == 0) {
        const char *padding;
        if (fractionText != NULL) {
            padding = wstrlen(fractionText) == 1 ? DAT_00536cd0 : DAT_00536cd4.padding;
        } else {
            fractionText = const_cast<char *>(DAT_00536cd4.empty);
            padding = DAT_00536cd4.padding;
        }
        char fractionBuffer[8];
        stringFormatBounded(fractionBuffer, 3, DAT_00536cdc, fractionText, padding);
        s32 fraction = FUN_001029f4(fractionBuffer, &end, 10);
        if (*end == 0 && integral >= 0 && fraction >= 0) {
            u16 value[64];
            FUN_0043bd0c(value, 64, format->format, integral, fraction);
            FUN_00102bbc(entry->value, value, 64);
            strncpy(entry->prefix, format->prefix, 32);
            strncpy(entry->suffix, format->suffix, 32);
            return 0;
        }
    }
    return 0xe0e1389d;
}
}
