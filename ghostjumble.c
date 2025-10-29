#include <stdint.h>

struct ghostJumbleState64 {
  uint64_t a;
  uint64_t b;
  uint64_t c;
};

struct ghostJumbleState32 {
  uint32_t a;
  uint32_t b;
  uint32_t c;
};

struct ghostJumbleState16 {
  uint16_t a;
  uint16_t b;
  uint16_t c;
};

struct ghostJumbleState8 {
  uint8_t a;
  uint8_t b;
  uint8_t c;
};

uint32_t ghostJumble64Low32(struct ghostJumbleState64 *s) {
  uint64_t mix = s->a + s->c;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111;
  s->c = (mix << 23) | (mix >> 41);
  return mix;
}

uint32_t ghostJumble32(struct ghostJumbleState32 *s) {
  uint32_t mix = s->a + s->c;

  s->a = ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 1111111111;
  s->c = (mix << 13) | (mix >> 19);
  return mix;
}

uint16_t ghostJumble32Low16(struct ghostJumbleState32 *s) {
  s->a = ((s->a << 9) | (s->a >> 23)) ^ s->b;
  s->b += 1111111111;
  s->c += s->a;
  return s->c;
}

uint16_t ghostJumble16(struct ghostJumbleState16 *s) {
  s->a = ((s->a << 6) | (s->a >> 10)) + s->b;
  s->b += 1111;
  s->c += s->a;
  return s->c;
}

uint8_t ghostJumble16Low8(struct ghostJumbleState16 *s) {
  s->a = ((s->a << 5) | (s->a >> 11)) + s->b;
  s->b += 11111;
  s->c += s->a;
  return s->c;
}

uint8_t ghostJumble8(struct ghostJumbleState8 *s) {
  s->a = ((s->a << 3) | (s->a >> 5)) + s->b;
  s->b += 55;
  s->c += s->a;
  return s->c;
}
