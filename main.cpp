
#include <string_view>
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <fstream>
#include <memory>
#include <future>
#include <tuple>

//third lib
#include <nlohmann/json.hpp>
#include "spdlog/spdlog.h"
#include "spdlog/cfg/env.h"
#include "spdlog/cfg/argv.h"

using namespace std;
using namespace spdlog;
using json = nlohmann::json;


int main(int argc, char *argv[])
{
    spdlog::cfg::load_env_levels(); //export SPDLOG_LEVEL=debug

	info("hello world! {}", argv[0]);

    return 0;
}
