#include<stdio.h>
#include<stdlib.h>
#include"head.h"

int main( int argc,char * argv[]  ){
	int d =0;
	int days = 0;	
	FILE * fp;
	FILE * ofp;
	const char * opath = "hellow";
	const char * path = argv[1]; 
	if( argc != 2 ){
		printf("the argv is illegal!!\n");
		exit( 0 );	

	}
	if( ( fp = fopen( path , "a+" ) ) == NULL ){
		printf("error");
		exit(0);
	}
	
	scanf("%d",&d);
	getchar( );
	fprintf( fp , ",%d", d );
	fclose(fp);
	days += yearToDays( d / 10000 );
	days += monthToDays( d / 100 % 100, d / 10000 );
	days += d % 100;
		
	printf("%d\n",days);
	if( ( ofp = fopen( "d.txt" , "a+" ) ) == NULL ){
		printf("error!!\n");
		exit( 0 );
	}
	const char * w = fish( days );
	fprintf( ofp ,",%s" ,w );
	fclose( ofp );
	return 0;
}
