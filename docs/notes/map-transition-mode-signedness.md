# Signed map transition mode

`GameState::unk0B9` is the signed byte at offset 0xB9. Both large map
controllers sign-extend it for their mode-5/mode-4 dispatch. Their separate
mode-5 equality tests use an unsigned byte load, which is equivalent for that
comparison and does not establish an unsigned field contract.

The existing raw declarations in both controllers already use signed char.
The canonical state declaration is corrected to s8, and the remaining raw
alias in FUN_00287c34 is made consistent; that alias only stores zero.
FUN_00280ccc writes the serialized request-kind byte or literal 3. The
serialized source field remains unsigned: no source-field signedness claim
is needed to recover the destination's declared type.

Validation against e7ce5c077: all 206 affected SMT4 units compile to unchanged
complete function output, including all 74 exact units. No new exact match
is claimed. Declaration delta and ceiling checks pass.
