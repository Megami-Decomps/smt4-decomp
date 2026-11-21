/* NON_MATCHING: the tokenizer context now shares the outgoing-argument slot as in retail (block scope); the copy buffer
 * takes sp+8 where retail puts the formatted value there, and the parameters and token pointers get other registers. */
#include "ui/FormattedNumericEntry.h"

extern "C" {
s32 FUN_001029f4(const char *text, char **end, s32 base);
s32 FUN_00102bbc(char *destination, const u16 *source, u32 size);
char *libc_strtok(char *text, const char *delimiters, char **context);
void FUN_0043bd0c(u16 *destination, u32 size, u32 format, s32 integral, s32 fraction);
s32 stringFormatBounded(char *destination, u32 size, const char *format, ...);
char *strncpy(char *destination, const char *source, u32 size);
u32 libc_strlen(const char *text);
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
    char *integralText;
    char *fractionText;
    /* The context's stack slot is reused for stringFormatBounded's stack argument in retail. */
    {
        char *context;
        integralText = libc_strtok(buffer, DAT_00536ccc, &context);
        fractionText = libc_strtok(NULL, DAT_00536ccc, &context);
    }
    char *end;
    s32 integral = FUN_001029f4(integralText, &end, 10);
    if (*end != 0)
        return 0xe0e1389d;
    const char *padding;
    if (fractionText == NULL) {
        fractionText = const_cast<char *>(DAT_00536cd4.empty);
        padding = DAT_00536cd4.padding;
    } else {
        padding = libc_strlen(fractionText) == 1 ? DAT_00536cd0 : DAT_00536cd4.padding;
    }
    char fractionBuffer[8];
    stringFormatBounded(fractionBuffer, 3, DAT_00536cdc, fractionText, padding);
    s32 fraction = FUN_001029f4(fractionBuffer, &end, 10);
    if (*end != 0 || integral < 0 || fraction < 0)
        return 0xe0e1389d;
    u16 value[64];
    FUN_0043bd0c(value, 64, format->format, integral, fraction);
    FUN_00102bbc(entry->value, value, 64);
    strncpy(entry->prefix, format->prefix, 32);
    strncpy(entry->suffix, format->suffix, 32);
    return 0;
}
}
