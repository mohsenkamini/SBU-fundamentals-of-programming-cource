#include <stdio.h>
int main () {
	char J_index, A_index, S_index;
	int Jims_year, Angelas_year, Stanleys_year, Jm,Am,Sm,Jd,Ad,Sd, trash;

	scanf ("%c. Jim Halpert, %d/%d/%d, %d years", &J_index , &Jims_year , &Jm , &Jd , &trash);

	scanf ("\n%c. Angela Martin, %d/%d/%d, %d years", &A_index , &Angelas_year , &Am , &Ad , &trash);
	scanf ("\n%c. Stanley Hudson, %d/%d/%d, %d years", &S_index , &Stanleys_year , &Sm , &Sd , &trash);

	printf ("%c. Jim Halpert, %d/%d/%d, %d years\n", J_index+1,Jims_year,Jm,Jd, 2022 - Jims_year);
	printf ("%c. Angela Martin, %d/%d/%d, %d years\n", A_index+1,Angelas_year,Jm,Jd, 2022 - Angelas_year);
	printf ("%c. Stanley Hudson, %d/%d/%d, %d years", S_index+1,Stanleys_year,Jm,Jd, 2022 - Stanleys_year);
	return 0 ;
}
