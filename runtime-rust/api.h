/* Generated with cbindgen:0.9.1 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
  int64_t len;
  uint8_t *data;
} ByteBuffer;

void free_ptr(const char *_buffer);

ByteBuffer release(const uint8_t *analysis_ptr,
                   int32_t analysis_length,
                   const uint8_t *release_ptr,
                   int32_t release_length,
                   const char *data_path,
                   int32_t _data_path_length);

ByteBuffer release_array(const uint8_t *analysis_ptr,
                         int32_t analysis_length,
                         const uint8_t *release_ptr,
                         int32_t release_length,
                         int32_t _m,
                         int32_t _n,
                         const double *const *_data);

const char *string_from_rust(void);
