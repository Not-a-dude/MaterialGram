#include <stdbool.h>

#ifdef NDEBUG
#define LOG_DISABLED
#endif
#define PACKAGE_NAME "com.dude.materialgram"_iobfs.c_str()
#define CERT_HASH 0xae74a009
#define CERT_SIZE 0x37d

#ifdef __cplusplus
extern "C" {
#endif

bool check_signature();

#ifdef __cplusplus
}
#endif