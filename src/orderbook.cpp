#include <iostream>


enum class OrderType{
    GoodTillCancel,
    FillAndKill
};


enum class Side{
    Buy,
    Sell
};

using Price = std::int32_t;
using Quantity = std::uint32_t;
using OrderID = std::uint64_t;


struct LevelInfo{
    Price price_;
    Quantity quantity_;
};

