add_library( unit_test_lib SHARED
        ORBextractor.cc
        )

target_link_libraries( unit_test_lib
        ${THIRD_PARTY_LIBS}
        )