# Fusion result output and eligibility status

The fusion preview path takes a writable packed-result record and returns an
eligibility status. Its previous declarations dropped the fourth argument at
the parent-pointer wrapper and incorrectly described the producer as returning
the preview owner. This correction is not new exact-function credit.

## Native evidence and ownership

- `FUN_001d1828` passes the party panel's record at `0xB48` as the fourth
  argument to `FUN_002624b8`, then tests the returned status. The wrapper
  extracts parent IDs at `StatBlock::id` (`0x46`) and falls through to
  `FUN_002624c4`, retaining the output argument and returned status.
- The three direct producer calls in `FUN_001de340` pass result records at
  the catalog's `0x1390` base with an eight-byte stride and test the status.
  Their raw surrounding controller remains unrecovered; only API boundaries
  are corrected here.
- `FUN_002624c4` returns failure before successful preparation and ultimately
  returns `battleCandidateMatchesSkillFilters`' scalar status. It does not
  return the owner pointer. The producer also clears the fifteen cost bits
  when installing the product, before optional cost accumulation.
- `PackedIdentifiers` already describes the result's two fifteen-bit parent
  IDs, two two-bit states, fifteen-bit product ID and fifteen-bit cost.
  Its existing representation is reused rather than introducing a competing
  local bitfield type. The party panel now owns that actual record at
  `0xB48`, followed by the result-unit buffer at `0xB50`; it is not a cast
  across two separately declared word members.
- `FusionCandidateFilter` is the same owner used by eligibility filtering,
  skill collection and the count reset. Native `FUN_001f3044` allocates
  `0x180` bytes, constructs it through `FUN_003c9c94`, and stores the pointer
  in the fusion screen's first word. Named skill fields retain their observed
  offsets (`0x146` array, `0x178` count, `0x17C/0x17D` flags). Exposing the
  word-sized count gives the owner its natural four-byte alignment and
  `0x180` size; the former `0x17E` assertion described an incomplete prefix.
  No packing workaround is used.

## Verification scope

The complete patch's affected-unit gate covers 65 functions: three nonexact
functions improve diagnostically, 62 complete normalized outputs remain
unchanged, all 44 previously exact affected functions stay exact, and no new
compile failures occur. The separately measured typed-party-record change
covers 52 functions: 51 unchanged, one nonexact improvement, all 34 exact
functions preserved. Diagnostic scores are not acceptance evidence by
themselves; the native argument, ownership, return and bit-write contracts
justify these changes. The wrapper and count reset retain their exact output.

The packed-output representation was also isolated in a source-only diagnostic
with corrected semantics and the old two-word bitfield view. Both forms remain
nonexact; the accepted version uses the already established shared record.
Existing bitfield scheduling and skill-loop differences remain in the producer.
