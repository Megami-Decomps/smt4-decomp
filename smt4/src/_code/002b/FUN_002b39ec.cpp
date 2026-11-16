/* Forwards to asdGxCommandListFinishCurrent, which is placed right after it (the call is a linker NOP). */
extern "C" {
void asdGxCommandListFinishCurrent(void);

void FUN_002b39ec(void)
{
    asdGxCommandListFinishCurrent();
}
}
