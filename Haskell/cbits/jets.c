#include "jets.h"

bool c_adder32(frameItem* dst, const frameItem *src) {
  return adder32(dst, *src, NULL);
}

bool c_fullAdder32(frameItem* dst, const frameItem *src) {
  return fullAdder32(dst, *src, NULL);
}

bool c_subtractor32(frameItem* dst, const frameItem *src) {
  return subtractor32(dst, *src, NULL);
}

bool c_fullSubtractor32(frameItem* dst, const frameItem *src) {
  return fullSubtractor32(dst, *src, NULL);
}

bool c_multiplier32(frameItem* dst, const frameItem *src) {
  return multiplier32(dst, *src, NULL);
}

bool c_fullMultiplier32(frameItem* dst, const frameItem *src) {
  return fullMultiplier32(dst, *src, NULL);
}

bool c_sha256_hashBlock(frameItem* dst, const frameItem* src) {
  return sha256_hashBlock(dst, *src, NULL);
}
