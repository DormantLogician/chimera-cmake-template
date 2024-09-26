#include <benchmark/benchmark.h>
#include "math/public/fn/add.h"

namespace specs_add
{
    static void bench_case(benchmark::State& state)
    {
        for (auto _ [[maybe_unused]] : state)
        {
            benchmark::DoNotOptimize(math::add(0, 0));
            benchmark::DoNotOptimize(math::add(0, -1));
            benchmark::DoNotOptimize(math::add(0, 2));
            benchmark::DoNotOptimize(math::add(-1, 0));
            benchmark::DoNotOptimize(math::add(2, 0));
            benchmark::DoNotOptimize(math::add(-2, 3));
            benchmark::DoNotOptimize(math::add(3, -2));
            benchmark::DoNotOptimize(math::add(-3, -4));
            benchmark::DoNotOptimize(math::add(-4, -3));
            benchmark::DoNotOptimize(math::add(3, 4));
            benchmark::DoNotOptimize(math::add(4, 3));
        };

        state.SetComplexityN(1);
    };
};

BENCHMARK(specs_add::bench_case)->Repetitions(5)->Complexity(benchmark::o1);

