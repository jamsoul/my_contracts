#include <altbn128.hpp>

extern "C" {

__attribute__((eosio_wasm_import)) 
int32_t alt_bn128_add( const char* op1_data, uint32_t op1_length,
                    const char* op2_data, uint32_t op2_length, 
                    char* result , uint32_t result_length);

__attribute__((eosio_wasm_import)) 
int32_t alt_bn128_mul( const char* op1_data, uint32_t op1_length,
                    const char* op2_data, uint32_t op2_length, 
                    char* result , uint32_t result_length);

}

ACTION altbn128::hi( name nm ) {
   /* fill in action body */
 /*  print_f("Name : %\n",nm);
   
   unsigned char op1[64] = { 34,36,128,201,249,84,9,191,164,172,106,232,144,185,193,80,188,136,84,43,135,179,82,233,41,80,195,64,69,139,12,9,
                    41,118,239,214,152,207,35,180,20,234,98,43,63,114,13,217,8,13,103,144,66,72,47,243,102,140,178,227,44,173,138,226};
   unsigned char op2[64] = { 27,210,11,236,163,216,210,142,83,109,43,91,211,191,54,215,106,246,138,245,230,201,108,166,229,81,155,169,255,143,83,50,
                    42,83,237,246,180,139,207,92,177,192,180,173,29,54,223,206,6,167,157,205,101,38,241,195,134,161,77,140,228,100,152,68};
   unsigned char ret[64] = { 0 };


   print_f("OP1:"); eosio::printhex(op1, 64); print_f("\n");
   print_f("OP2:"); eosio::printhex(op2, 64); print_f("\n");
   
   alt_bn128_add( (char*)op1, 64, (char*)op2, 64, (char*)ret, 64);

   print_f("OUT:"); eosio::printhex(ret, 64); print_f("\n");
*/
   unsigned char oo1[64] = { 30,70,45,1,209,134,31,126,228,153,191,112,171,18,173,227,53,217,133,134,181,45,184,71,238,46,193,231,144,23,14,4,
                     20,189,128,127,78,100,144,75,41,232,116,253,130,79,241,110,70,91,87,152,177,154,175,224,202,230,10,45,188,249,19,51 };
   unsigned char oo2[32] = { 48,88,111,133,232,252,234,145,192,219,30,211,10,172,247,53,14,114,239,212,207,117,107,60,227,9,242,21,158,39,95,249 };
   unsigned char rot[64] = { 0 };


   print_f("OP1:"); eosio::printhex(oo1, 64); print_f("\n");
   print_f("OP2:"); eosio::printhex(oo2, 32); print_f("\n");
   
   alt_bn128_mul( (char*)oo1, 64, (char*)oo2, 32, (char*)rot, 64);

   print_f("OUT:"); eosio::printhex(rot, 64); print_f("\n");


}
