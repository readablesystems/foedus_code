add_subdirectory(array)
add_subdirectory(hash)
add_subdirectory(masstree)
add_subdirectory(sequential)

set_property(GLOBAL APPEND PROPERTY ALL_FOEDUS_CORE_SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/composer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/metadata.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/page.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/partitioner.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage_id.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage_log_types.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage_manager.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage_manager_pimpl.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/storage_options.cpp
)
