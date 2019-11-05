#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <memory>

#include <ucs/core/DummyComponent.hpp>

bool load_ucs() {
    std::unique_ptr<ucs::DummyComponent> ucs = std::make_unique<ucs::DummyComponent>("test");
    ucs::log::info("ucs uuid : {}", ucs->uuid());
    ucs->print();
    return 1;
}

TEST_CASE("Test loading of ucs", "[single-file]") {
  REQUIRE(load_ucs() == 1);
}
