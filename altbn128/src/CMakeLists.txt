project(altbn128)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( altbn128 altbn128 altbn128.cpp )
target_include_directories( altbn128 PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( altbn128 ${CMAKE_SOURCE_DIR}/../ricardian )