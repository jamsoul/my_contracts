#include <newshatest.hpp>
#include <eosio/crypto.hpp>

#ifdef __cplusplus
extern "C" __attribute__((eosio_wasm_import)) void sha3( const char* data, uint32_t length, checksum256* hash );
#endif

ACTION newshatest::hi( name nm ) {
   sha3("test string", 11, 0);
}
