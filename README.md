#### GhostJumble64Low32

GhostJumble64Low32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG32 RXS M, PCG32 XSH RR, PCG32 XSH RS and PCG32 XSL RR.

It has a period of at least 2⁶⁴.

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble64Low32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports both a 64-bit, unsigned integral type for `uint64_t` and a 32-bit, unsigned integral type for `uint32_t`.

---

#### GhostJumble32

GhostJumble32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG32 RXS M XS and Xorshift32.

It has a period of at least 2³².

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.

---

#### GhostJumble32Low16

GhostJumble32Low16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG16 RXS M, PCG16 XSH RR and PCG16 XSH RS.

It has a period of at least 2³².

Seeding `a` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble32Low16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports both a 32-bit, unsigned integral type for `uint32_t` and a 16-bit, unsigned integral type for `uint16_t`.

---

#### GhostJumble16

GhostJumble16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG16 RXS M XS and Xorshift16.

It has a period of at least 2²².

Seeding `a` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

---

#### GhostJumble16Low8

GhostJumble16Low8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG8 RXS M, PCG8 XSH RR and PCG8 XSH RS.

It has a period of at least 2¹⁶.

Seeding `a` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble16Low8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports both a 16-bit, unsigned integral type for `uint16_t` and an 8-bit, unsigned integral type for `uint8_t`.

---

#### GhostJumble8

GhostJumble8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG8 RXS M XS and Xorshift8.

It has a period of at least between 2¹⁸ and 2¹⁹, precisely 458752.

Seeding `a` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2⁸ parallel instances that each have a non-overlapping period of at least 2⁸. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`ghostJumble8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.
