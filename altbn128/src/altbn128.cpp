#include <altbn128.hpp>

__attribute__((eosio_wasm_import)) 
void alt_bn128_add( const char* op1_data, uint32_t op1_length,
                    const char* op2_data, uint32_t op2_length, 
                    const char* result );

ACTION altbn128::hi( name nm ) {
   /* fill in action body */
   print_f("Name : %\n",nm);
   char ret[1000];
   alt_bn128_add( "hello", 5, "bye", 3, ret);
}