
module Foo where

foreign export ccall foo :: Int -> Int

foo :: Int -> Int
foo = floor . sqrt . fromIntegral
