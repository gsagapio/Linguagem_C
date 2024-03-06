#include <stdio.h>
#include <stdlib.h>

float calcLucro(float p_fab, float por_dist){
	return p_fab * por_dist / 100;
}

float calcImpostos(float p_fab, float por_imp){
	return p_fab * por_imp / 100;
	
}

float calcPrecoFinal(float p_fab, float v_dist, float v_imp){
	return p_fab + v_dist + v_imp;
	
}


int main(int argc, char *argv[]) {
	
	float preco_f, porce_dist, porc_i, lucro_dist, imp, vlr_f;
	
	printf("Insira o preco de fabrica: \n");
	scanf("%f", &preco_f);
	
	printf("Insira o percentual do lucro do distribuidor:  \n");
	scanf("%f", &porce_dist);
	
	printf("Insira o percentual do imposto:  \n");
	scanf("%f", &porc_i);
	
	lucro_dist = calcLucroDist(preco_f, porce_dist);
	imp = calcImposto(preco_f, porc_i);
	
	vlr_f = calcPrecoFinal(preco_f, lucro_dist, imp);
	
	printf("O lucro do distribuidor : R$ %.2f\n", lucro_dist);
	printf("Impostos : R$ %.2f\n", imp);
	printf("O valor final : R$ %.2f\n", vlr_f);
	
	return 0;
}
