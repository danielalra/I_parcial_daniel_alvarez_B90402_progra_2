#include <gtest/gtest.h>
#include <string>

#include "../src/calculadoraCosto.h"

namespace {
    TEST(CalculadoraCostoTests, CalculadoraCosto_Constructor){
        CalculadoraCosto *produccion =  new CalculadoraCosto (1);
        
    }

    //articulo 1, x < 3 kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test1){
        CalculadoraCosto *produccion =  new CalculadoraCosto (1);
        float costo = produccion->CalcularCosto(2.5);
        EXPECT_FLOAT_EQ(0.8625, costo);
    }

    //articulo 2, x < 3 kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test2){
        CalculadoraCosto *produccion =  new CalculadoraCosto (2);
        float costo = produccion->CalcularCosto(2.5);
        EXPECT_FLOAT_EQ(1.5, costo);
    }
    //articulo 3, x < 3 kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test3){
        CalculadoraCosto *produccion =  new CalculadoraCosto (3);
        float costo = produccion->CalcularCosto(2.5);
        EXPECT_FLOAT_EQ(0.625, costo);
    }
    //articulo 1, x >= 3 && x < 9kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test4){
        CalculadoraCosto *produccion =  new CalculadoraCosto (1);
        float costo = produccion->CalcularCosto(3);
        EXPECT_FLOAT_EQ(1.95, costo);
    }
    //articulo 2, x >= 3 && x < 9kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test5){
        CalculadoraCosto *produccion =  new CalculadoraCosto (2);
        float costo = produccion->CalcularCosto(8.5);
        EXPECT_FLOAT_EQ(3.825, costo);
    }
    //articulo 3, x >= 3 && x < 9kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test6){
        CalculadoraCosto *produccion =  new CalculadoraCosto (3);
        float costo = produccion->CalcularCosto(8.5);
        EXPECT_FLOAT_EQ(2.125, costo);
    }
    //articulo 1, x > 9 kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test7){
        CalculadoraCosto *produccion =  new CalculadoraCosto (1);
        float costo = produccion->CalcularCosto(10);
        EXPECT_FLOAT_EQ(8, costo);
    }
    //articulo 2, x > 9 kg
    TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test8){
        CalculadoraCosto *produccion =  new CalculadoraCosto (2);
        float costo = produccion->CalcularCosto(10);
        EXPECT_FLOAT_EQ(3.45, costo);
    }
    //articulo 3, x > 9 kg
     TEST(CalculadoraCostoTests, CalculadoraCosto_CalculoCosto_Test9){
        CalculadoraCosto *produccion =  new CalculadoraCosto (3);
        float costo = produccion->CalcularCosto(10);
        EXPECT_FLOAT_EQ(2.5, costo);
    }
    
}