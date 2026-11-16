/* Forwards to asdGxCommandListFinishCurrent, which is placed right after it (the call is a linker NOP). */
extern "C" {
void asdGxCommandListFinishCurrent(void);

void FUN_0017e4d4(void)
{
    asdGxCommandListFinishCurrent();
}
}
