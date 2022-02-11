project(newshatest)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( newshatest newshatest newshatest.cpp )
target_include_directories( newshatest PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( newshatest ${CMAKE_SOURCE_DIR}/../ricardian )