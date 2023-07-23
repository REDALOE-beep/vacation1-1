    // 6?? 1??
// #include<stdio.h>
// #include<math.h>
// void height(int baseline, int deg, float *h);
// int main(){
//     int baseline, seta;
//     float h;
//     printf("????? ????? ?????? ???????. : ");
//     scanf("%d %d", &baseline, &seta);
//     height(baseline, seta, &h);
//     printf("?????? ????? %f????.", h);
//     return 0;
// }
// void height(int baseline, int deg, float *h){
//     *h = baseline * tan(deg);
// }

// // 6?? 2??
// #include<stdio.h>
// int bs(int a, int b);
// int main(){
//     int a,b, tf_value;
//     printf("Please put in two integers to determine the multiple");
//     printf("\n first integer : ");
//     scanf("%d", &a);
//     printf("secend integer : ");
//     scanf("%d", &b);
//     tf_value = bs(a,b);
//     if (tf_value == 1){
//         printf("%d is multiple of %d", a, b);
//     }
//     else{
//         printf("%d is not multple of %d", a, b);
//     }
//     return 0;
// }
// int bs(int a, int b){
//     int result;
//     if (a%b==0){
//         result = 1;
//     }
//     else{
//         result = 0;
//     }
//     return result;
// }

// // 6?? 3??
// #include<stdio.h>
// #include<math.h>
// void dot_distance(int x1, int x2, int y1, int y2, double*distance);
// int main(){
//     int x1,x2,y1,y2;
//     double distance;
//     printf("Enter the first coordinate value : ");
//     scanf("%d %d", &x1, &y1);
//     printf("Enter the second coordinate value : ");
//     scanf("%d %d", &x2, &y2);
//     dot_distance(x1,x2,y1,y2,&distance);
//     printf("The distance between the two coordinates are %.2lf.", distance);
//     return 0;
// }
// void dot_distance(int x1, int x2, int y1, int y2, double*distance){
//     *distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
// }

// // 6?? 4??
// #include<stdio.h>
// #include<math.h>
// void sa(int x, int y, float* result);
// void gi(int x, int y, float* result);
// void zo(int x, int y, float* result);
// int main(){
//     int x, y;
//     float result;
//     printf("Enter two integers. --> ");
//     scanf("%d %d", &x, &y);
//     printf("\nThe arithmetic, geometry, and harmonic means are calculated as follows.");
//     sa(x,y,&result);
//     printf("\narithmetic = %.2f\n", result);
//     gi(x,y,&result);
//     printf("gemetry = %.2f\n", result);
//     zo(x,y,&result);
//     printf("harmonic = %.2f\n", result);
//     return 0;
// }
// void sa(int x, int y, float* result){
//     *result = (x + y) / 2.0;
// }
// void gi(int x, int y, float* result){
//     *result = sqrt(x * y);
// }
// void zo(int x, int y, float* result){
//     *result = (2*x*y) / (float)(x + y);
// }

// 6?? 5??
// #include<stdio.h>
// int sumofpower(int n, int k);
// int power(int n, int k);

// int main(){
//     int n, k, total;
//     printf("Find the k power of n.\n");
//     printf("Enter two integers. : ");
//     scanf("%d %d", &n, &k);
//     total = power(n, k);
//     printf("Sum of sequences up to 1^%d + -- + %d^%d = %d", k, n, k, total);
//     return 0;
// }

// int sumofpower(int x, int k){
//     int i, acml = 1;
//     for (i = 1; i<=k; i++){
//         acml *= x;
//     }
//     return acml;
// }
// int power(int n, int k){
//     int i, total = 0;
//     for (i = 1; i<=n; i++){
//         total += sumofpower(i,k);
//     }
//     return total;
// }

//6?? 6??
// #include<stdio.h>
// #include<math.h>
// void ec(int a, int b, int d);
// void ec1(int a, int b);
// int main(){
//     int a,b,c,d;
//     printf("Enter three Integers : ");
//     scanf("%d %d %d", &a,&b,&c);
//     d = b * b - 4* a *c;
//     if (d>0){
//         ec(a,b,d);
//     }
//     else if (d==0){
//         ec1(a,b);
//     }
//     else{
//         printf("???????? ???? ???????.");
//     }
// }
// void ec(int a, int b, int d){
//     double x1, x2;
//     x1 = -b + sqrt(d)/(double)2*a;
//     x2 = -b - sqrt(d)/(double)2*a;
//     printf("???????????? ???? %.2lf %.2lf????.", x1,x2);
// }
// void ec1(int a, int b){
//     double x1;
//     x1 = b / 2 * a ;
//     printf("???????????? ????? %.2lf ????.",x1);
// }

// //6??? 7??
// #include<stdio.h>
// void clac(int n, int k, double *result);
// int main(){
//     int n, k;
//     double result;
//     char stopandgo;
//     while(1){
//         printf("n??? k?????? ����??????.\n n ?????? : ");
//         scanf("%d",&n);
//         printf("k?????? : ");
//         getchar();
//         scanf("%d",&k);
//         clac(n, k, &result);
//         printf("%lf\n",result);
//         printf("?????? ���??????�ڽ�?????? (Y/N) : ");
//         getchar();
//         scanf("%c", &stopandgo);
//         if (stopandgo == 'N'||'n'){
//             break;
//         }
//     }
// }
// void clac(int n, int k, double *result){
//     int i, acc=1;
//     for (i=0;i<k;i++){
//             acc*=n;
//     }
//     if (k < 0){
//         *result = 1.0/acc;
//     }
//     else{
//         *result = acc;
//     }
// }

// 6장 8번
// #include<stdio.h>
// #include<math.h>
// void equation(double num, double* i1);
// void calc(double num, double* sr2calc);

// int main(){
//     double num, i1, sr2calc;
//     printf("제곱근을 구할 수 를 입력하세요. : ");
//     scanf("%lf", &num);
//     equation(num, &i1);
//     calc(num, &sr2calc);
//     printf("함수에 의해 구한 %.6lf의 제곱근 = %.6lf\n", num, i1);
//     printf("라이브러리 함수 sqrt(%.6lf) = %.6lf\n",num, sr2calc);
//     return 0;
// }
// void equation(double num, double* i1){
    
//     for (double i = 1;; i = *i1){ //임의의 i
//         *i1 = (i + num/i)/2.0;
//         if (i - *i1 < 0){
//             if (-(i-*i1) < 0.000001){
//                         break;
//             }
//         }
//         else{
//             if (i-*i1 < 0.000001){
//             break;
//             }
//         }
//     }
// }

// void calc(double num, double* sr2calc){
//     *sr2calc = sqrt(num);
// }


// 6장 9번
// #include<stdio.h>
// void event(int n, int* re_ev);
// void absolute(int n,int* re_ab);
// void pn(int n, int* re_pn);

// int main(){
//     int re_ev, re_ab, re_pn, n;
//     printf("???????? ?????????�ּ�??? : ");
//     scanf("%d", &n);
//     event(n, &re_ev);
//     pn(n, &re_pn);
//     if (re_ev == 1){
//         printf("�־�?? ????????? ¦��?????????.\n");
//     }
//     else{
//         printf("�־�?? ????????? ???????????????.\n");
//     }
//     absolute(n, &re_ev);
//     if (re_pn == 1){
//         printf("�־�?? ????????? ?????? ?????????.\n");
//     }
//     else if (re_pn == 0){
//         printf("�־�?? ????????? 0??? ?????? ?????????.\n");
//     }
//     else if (re_pn == -1){
//         printf("�־�?? ????????? ???????????????.");
//     }
// }
// void event(int n, int* re_ev){
//     if (n%2==1){
//         *re_ev = 0;
//     }
//     else{
//         *re_ev = 1;
//     }
// }
// void absolute(int n,int* re_ab){
//     if (n<0){
//         printf("�־�?? ????????? ??????��??? %d?????????.\n", -n);
//     }
//     else {
//         printf("�־�?? ????????? ??????��??? %d?????????.\n", n );
//     }
// }
// void pn(int n, int* re_pn){
//     if (n>0){
//         *re_pn = 1;
//     }
//     else if (n == 0 ){
//         *re_pn = 0;
//     }
//     else if (n< 0 ){
//         *re_pn = -1;
//     }
// }

// //6장 10번
// #include<stdio.h>
// void c_area (int r, double* area);
// void t_area (int under, int h, double* area);
// void s_area (int under, int side, double* area);

// int main(){
//     int menu, r, under, h, side;
//     double area;
//     printf("1원의 넓이 2.삼각형의 넓이  3. 사각형의 넓이\n");
//     printf("구하고자 하는 도형의 번호를 입력하시오 --->");
//     scanf("%d", &menu);
//     switch(menu){
//         case 1:
//             printf("반지름을 입력하시오 --> ");
//             scanf("%d", &r);
//             c_area(r, &area);
//             break;
//         case 2:
//             printf("밑변을 입력하세요 --> ");
//             scanf("%d", &under);
//             printf("높이를 입력하세요 --> ");
//             scanf("%d", &h);
//             t_area(under, h, &area);
//             break;
//         case 3:
//             printf("가로를 입력하세요 --> ");
//             scanf("%d", &under);
//             printf("세로를 입력하세요 --> ");
//             scanf("%d", &side);
//             s_area(under, side, &area);
//             break;
//     }
//     printf("넓이는 %.2lf", area);
//     return 0;
// }    
// void c_area(int r, double* area){
//     *area = 3.14 * r * r;
// }
// void t_area(int under, int h, double* area){
//     *area = under * h / 2.0;
// }
// void s_area(int under, int side, double*area){
//     *area = under * side;
// }

// 6장 11번

// #include<stdio.h>
// void man(int year, int birthYear, char birthTime, int* manOld);
// int main(){
//     int year, birthYear, manOld;
//     char birthTime;
//     printf("현재년도를 입력해주세요 : ");
//     scanf("%d", &year);
//     printf("태어난 년도를 입력해주세요 : ");
//     scanf("%d", &birthYear);
//     printf("생일이 지났나요? (Y/N) : ");
//     getchar();
//     birthTime = getchar();
//     man(year, birthYear, birthTime, &manOld);
//     printf("만 나이는 %d 입니다. ", manOld);
//     return 0;
    
// }

// void man(int year, int birthYear, char birthTime, int* manOld){
//     int passed;
//     if (birthTime = 'y' || 'Y'){
//         passed = 0;
//     }
//     else if (birthTime = 'n' || 'N'){
//         passed = 1;
//     }
//     *manOld = (year - birthYear) - passed;
// }

//6장 12번
// #include<stdio.h>
// void nhap(int n, int*result);
// int rhap(int n);
// int main(){
//     int n, result = 0;
//     printf("정수입력");
//     scanf("%d", &n);
//     nhap(n, &result);
//     printf("결과 값 = %d", result);
//     return 0;
// }
// void nhap(int n, int* result ){
//     int i;
//     for (i=0; i<n; i++){
//         *result += rhap(i);
//     }
// }
// int rhap(int n){
//     int i, j=1;
//     for ( i= 0 ; i<=n; i++){
//         j+=i;
//     }
//     return j;
// }

// // 6장 13번
// #include<stdio.h>
// void sum (int n, int* result);
// int calc(int* j);
// int main(){
//     int n, result = 3;
//     printf("정수입력 : ");
//     scanf("%d", &n);
//     sum(n, &result);
//     printf("10항까지의 점화식 수열 합 = %d", result);
//     return 0;
// }
// void sum(int n, int* result){
//     int i, j=3;
//     for (i=0; i<n; i++){
//         *result += calc(&j)+1;
//     }
// }
// int calc(int* j){
//     *j = 2*(*j)+1;
//     return *j;
// }

// // 6장 14번
// #include <stdio.h>

// int fibonacci(int n);

// int main(void){
//     int n;
//     scanf("%d", &n);
//     fibonacci(n);
//     for (int i = 0; i < n+1; i++){
//         printf("%d ", fibonacci(i));
//     }
//     return 0;
// }

// int fibonacci(int n) {
//     if (n == 0) {
//     return 0;
//     }
//     else if (n == 1) {
//     return 1;
//     }
//     else {
//     return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }




// // 8장 1번
// #include<stdio.h>
// int main(){
//     int a[] = {5,2,3,5,3,2,4,8,9,9,7}, result = 0;
//     for (int i = 0; i<sizeof(a)/sizeof(int); i++){
//         result += a[i];
//     }
//     printf("sum = %d", result);
//     return 0;
// }

// // 8장 2번
// #include<stdio.h>
// int main(){
//     int bae[] = {97,23,11,39,65,76,54,71,34,45}, temps, i,j,su;
//     su = sizeof(bae)/sizeof(int);
//     for (i=0;i<su;i++){
//         for (j=i+1;j<su;j++){
//             if (bae[i]<bae[j]){
//                 temps = bae[i];
//                 bae[i] = bae[j];
//                 bae[j] = temps;
//             }
//         }
//     }
//     for (i=0;i<su;i++){
//         printf("%3d", bae[i]);
//     }
//     return 0;
// }

// //8장 3번
// #include<stdio.h>
// int main(){
//     int score[] = {100,98,100,80,100}, i; //중간고사/ 기말고사/ 퀴즈/ 과제 점수/ 출석
//     double a [sizeof(score)/sizeof(int)];
//     double avg;
//     avg = (score[0]*0.3+score[1]*0.3 + score[2]*0.1 + score[3]*0.1+score[4]*0.2);

//     for (i =0; i<5; i++){
//         printf("%5d", score[i]);
//     }
//     printf("\n가중치를 부여한 점수는 %.2lf 점 입니다.", avg);
//     return 0;
// }

// // 8장 4번

// }
// // 8장 5번
// #include<stdio.h>
// void mami(int bae[100], int* max, int*maxpo, int*mi,int*mipo);
// int main(){
//     int bae[100] = {}, i = 0, max = 0, maxpo = 0, mi = 9999, mipo = 9999;
//     while (i != 99){
//         scanf("%d", &bae[i]);
//         if (bae[i] <0){
//             bae[i] = 0;
//             break;
//         }
//         i++;
//     }
//     mami(bae, &max, &maxpo, &mi, &mipo);
//     printf("최대값은 %d이며 위치는 %d 번째 방입니다.\n최소값은 %d이며 위치는 %d번째 방입니다.",max, maxpo,mi,mipo);
//     return 0;
// }
// void mami(int bae[100], int*max, int*maxpo, int*mi,int*mipo){
//     int i;
//     for (i = 0; i<99; i++){
//         if (bae[i]<*mi && bae[i] != 0){
//             *mi = bae[i];
//             *mipo = i;
//         }
//         if (bae[i]>*max){
//             *max = bae[i];
//             *maxpo = i;
//         }
//     }
// }

// 8장 6번
// #include<stdio.h>
// int main(){
//     int freq[101] = {}, i, grade;
//     while(1){
//         printf("\n성적을 입력하세요 : ");
//         scanf("%d", &grade);
//         if (grade>=0 && grade<=100){
//             freq[grade]++;
//         }
//         else{
//             break;
//         }
//     }
//     for (i = 0; i<101; i++){
//         printf("%2d      %d\n", i, freq[i]);
//     }
//     return 0;
// }

// 8장 7번
// 답안지 채점 후 결과 채점 프로그램
// 조건: 10개 문항이 있는 학생 10명의 시험 답안지를 채점함, 
// 시험 정답은 1차원 배열, 답안지는 2차원 배열에 저장
// #include<stdio.h>
// void grading(int* answer, int (*report)[11], int* num_score);
// void suk_prn(int (*report)[11], int* num_score);
// int main(){
//     int num_score[10];
//     int answer[10] = {1,3,3,4,2,2,3,1,4,1}; // index = 0~9
//     int report[10][11] = {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
//     printf("       ㅁ 문항별 채점 결과 ㅁ\n");
//     printf("========================================\n");
//     printf("문항  0  1  2  3  4  5  6  7  8  9  점수\n");
//     printf("========================================\n");
//     grading(answer, report, num_score);
//     suk_prn(report, num_score);
//     return 0;
// }
// void grading(int* answer, int (*report)[11], int* num_score){
//     int sheet[10][11]={{1,3,3,4,2,2,3,1,4,0},
//                         {1,0,3,0,2,2,3,1,4,1},
//                         {0,3,3,4,2,2,3,1,4,1},
//                         {1,3,3,0,2,0,3,0,4,1},
//                         {1,3,3,4,2,2,3,0,4,0},
//                         {1,0,3,0,2,0,3,0,4,0},
//                         {1,3,3,4,2,2,3,1,4,1},
//                         {1,3,3,4,0,2,3,1,4,1},
//                         {0,3,0,4,0,2,0,1,4,1},
//                         {0,0,0,0,2,0,0,1,4,1}},i;
//     for (i = 0; i<10; i++){
//         for (int j = 0; j<10; j++){
//             if (*(answer+j) == sheet[i][j]){
//                 *(*(report + i)+j) = 1;
//             }
//         }
//     }
//     int count = 0;
//     for (i = 0; i<10; i++){
//         printf("%d번  ", i+1);
//         for (int j = 0; j<10; j++){  // O / X 출력
//             if (*(*(report + i) + j) == 1){
//                 count += 1;
//                 printf("O  ");
//             }
//             else {
//                 printf("X  ");
//             }
//         }
//         *(*(report + i) + 10) = count;
//         num_score[i] = count;
//         printf("%3d점\n", *(*(report + i)+10));
//         count = 0;
//     }
//     printf("========================================\n");
// }



// void suk_prn(int (*report)[11], int* num_score){
//     int i,j;
//     int rank[10] = {1,1,1,1,1,1,1,1,1,1};  //석차 로직
//     for (i = 0; i<10; i++){
//         for (j =0; j<10; j++){
//             if (*(*(report + i) + 10) < *(*(report + j)+10) ){
//                 rank[i] += 1;
//             }
//         }
//     }
//     포인터 num_score[10] = {9,8,9,7,8,5,10,9,6,4}
//     int num_down[10], c = 0, max = 0, maxpo = 0,nomore_max=11;
//     // 내림차순 정리
//     for (i = 0; i<10; i++){
//         for (j = 0; j<10; j++){
//             if (max < *(num_score+j) && *(num_score + j)<=nomore_max){
//                 max = *(num_score+j);
//                 maxpo = j;
//             }
//         }
//         num_down[c] = maxpo + 1;
//         nomore_max = max;
//         c++;
//         max = 0;
//         maxpo = 0;
//     }


//     printf("  ㅁ 정렬 및 석차 ㅁ\n");
//     printf("======================\n");
//     printf("   번호  점수  석차\n");
//     printf("======================\n");
    
//     //printf("%5d번%5d점",  번이 문제임  , *(*(report+[번호+1]) + 10)   )
//     for (i = 0; i<10; i++){
//         printf("%d  ", num_down[i]);
//     }
// }  


//     for (i = 0; i<10; i++){
//         for (j =0; j<10; j++){
//         }
//     }


// #include<stdio.h>
// int main(){
//     int bae[10],i,j,avg,overlap,count =0;
//     int c[10] ={0,0,0,0,0,0,0,0,0,0};
//     for (i = 0; i<10; i++){
//         scanf_s("%d",&bae[i]);
//     }
//     for(i = 0; i<10; i++){
//         count +=bae[i];
//     }
//     avg = count / 10;
//     for(i = 0; i<10; i++){
//         for(j = 0; j<10; j++){
//             if(bae[i] == bae[j]){
//                 c[i]+=1;
//             }
//         }
//     }
//     int max = 0, maxpo = 0;
//     for(i = 0; i<10; i++){
//         if (max<c[i]){
//             max = c[i];
//             maxpo = i;
//         }
//     }
//     printf("%d", avg);
//     printf("\n%d", bae[maxpo]);
//     return 0;
// }


// #include<stdio.h>
// void main(){
//     char a [80];
//     int i;
//     printf("문자열을 입력하시오. " );
//     gets(a);
//     for(i = 0; a[i] != '\0'; i++){
//         if(a[i] >= 'a' && a[i] <= 'z'){
//             a[i] =  a[i] - 'a' + 'A';
//         }
//     }
//     for(i = 0; a[i] != '\0'; i++){
//         printf("%c",a[i],1);
//     }
// }

//바보 계산 프로그램
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int reverse1, reverse2, ans, i = 0;
//     char su1[5], su2[5];
//     char temps[2];
//     scanf("%s %s", &su1, &su2);
//     temps[1] = su1[0];
//     su1[0] = su1[2];
//     su1[2] = temps[1];

//     temps[1] = su2[0];
//     su2[0] = su2[2];
//     su2[2] = temps[1];

//     reverse1 = atoi(su1);
//     reverse2 = atoi(su2);
//     if (reverse1 > reverse2){
//         printf("%d", reverse1);
//     }
//     else{
//         printf("%d", reverse2);
//     }
//     return 0;
// }

// // 입력하지 않은 수 구하기
// #include<stdio.h>
// int main(){
//     int i, j, k = 0, count = 0, num[28],nonum[31]={0,};
//     // nonum에는 0또는1로 입력된 수 입력되지 않은 수 구별
//     // 0~30
//     for (i = 0; i < 28; i++){
//         scanf("%d", &num[i]);
//         nonum[num[i]] = 1;
//     }

//     for (i = 1; i <= 30; i++){
//         if (nonum[i] == 0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// // 코딩은 체육과목입니다.
// #include<stdio.h>
// int main(){
//     int n, i;
//     scanf("%d", &n);

//     for (i = 0; i < n/4; i++){
//         printf("long ");
//     }
//     printf("int");

//     return 0;
// }

// 공백으로 단어개수 찾기
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int i, count = 1;
//     char sentence[1000001];
//     scanf("%[^\n]s", sentence);

//     // 문장의 시작과 끝에 공백이 있는 경우를 처리하기 위해 조건 추가
//     if (sentence[0] == ' ') {
//         count = 0;
//     }
//     if (sentence[strlen(sentence) - 1] == ' ') {
//         count -= 1;
//     }

//     for (i = 0; i < strlen(sentence); i++) {
//         if (sentence[i] == ' ') {
//             count += 1;
//         }
//     }

//     printf("%d", count);
//     return 0;
// }

//8장 7번
// #include<stdio.h>
// int main(){
//     int i,j;
//     int suk[10] = {1,1,1,1,1,1,1,1,1,1}, score[10] = {0,}, report_sheet[10][10] = {0,} , answer_sheet[10] = {1,3,3,4,2,2,3,1,4,1};
//     int n_s_r[10][3], temps; // num_score_rank
//     int sheet[10][11]={{1,3,3,4,2,2,3,1,4,0},
//                      {1,0,3,0,2,2,3,1,4,1},
//                      {0,3,3,4,2,2,3,1,4,1},
//                      {1,3,3,0,2,0,3,0,4,1},
//                      {1,3,3,4,2,2,3,0,4,0},
//                      {1,0,3,0,2,0,3,0,4,0},
//                      {1,3,3,4,2,2,3,1,4,1},
//                      {1,3,3,4,0,2,3,1,4,1},
//                      {0,3,0,4,0,2,0,1,4,1},
//                      {0,0,0,0,2,0,0,1,4,1}};
//     for (i = 0; i < 10; i++){
//         for (j = 0; j < 10; j++){
//             if (sheet[i][j] == answer_sheet[j]){
//                 report_sheet[i][j] = 1;
//                 score[i] += 1;
//             }
//         }
//     }

//     for (i = 0; i < 10; i++){ // 석차
//         for (j = 0; j < 10; j++){
//             if (score[i] < score[j]){
//                 suk[i] += 1;
//             }
//         }
//     }
//     for (i = 0; i < 10; i++){ //담기
//         for (j = 0; j < 10; j++){
//             n_s_r[i][0] = i+1;
//             n_s_r[i][1] = score[i];
//             n_s_r[i][2] = suk[i];
//         }
//     }
//     for (i = 0; i < 10; i++){ //점수 순으로 모두 정렬
//         for (j = i+1; j < 10; j++){
//             if (n_s_r[i][2] > n_s_r[j][2]){
//                 for (int k = 0; k < 3; k++){
//                     temps = n_s_r[i][k];
//                     n_s_r[i][k] = n_s_r[j][k];
//                     n_s_r[j][k] = temps;
//                 }    
//             }
//         }
//     }

//     printf("       ㅁ 문항별 채점 결과 ㅁ\n");
//     printf("========================================\n");
//     printf("문항  0  1  2  3  4  5  6  7  8  9  점수\n");
//     printf("========================================\n");
        
//     for (int i = 0; i < 10; i++){
//       printf("%2d번  ", i + 1);
//         for (int j = 0; j < 10; j++){  // O / X 출력
//             if (report_sheet[i][j] == 1){
//             printf("O  ");
//             }
//             else {
//             printf("X  ");
//             }
//         }
//         printf("%2d점\n", score[i]);
//     }
//     printf("  ㅁ 정렬 및 석차 ㅁ\n");
//     printf("======================\n");
//     printf("   번호  점수  석차\n");
//     printf("======================\n");
//     for (i = 0; i < 10; i++){
//         printf("%5d %5d %5d\n", n_s_r[i][0], n_s_r[i][1], n_s_r[i][2]);    
//     }
//     return 0;
// }

// 8장 8번
// 요구명세서 : 
// 행렬의 5x5 외곽을 누적해 출력
// 행렬의 전체와 행렬의 외곽을 각각 출력
// 입력 => 처리 => 출력을 활용
// #include<stdio.h>
// void prn(int bae[5][5], int outline);

// int main(){
//     int bae[5][5] = {
//     {58,131,106,76,123},
//     {144,120,88,123,89},
//     {62,17,108,21,48},
//     {57,134,6,2,65},
//     {149,115,141,33,7}};

//     int i, j, outline = 0;
//     // 퍼즐
//     for (i = 0; i < 5; i++){
//         for (j = 0; j < 5; j++){
//             if (j != 1 && j != 2 && j!= 3){ //j는 0과 4만 나옴
//                 outline += bae[i][j]; // 역활 0열 4열의 수 모두 합
//             }
//             if ((i == 0 || i == 4) && j != 0 && j != 4){
//                 outline += bae[i][j]; // 역활 i가 0행 4행 일때 123열 더함
//                 printf("%3d\n",bae[i][j]);
//             }
//         }
//     }

//     prn(bae, outline);
//     return 0;
// }

// void prn(int bae[5][5], int outline){
//     int i,j;
//     for (i = 0; i < 5; i++){
//         for (j = 0; j < 5; j++){
//             printf("%3d  ", bae[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n외각 요소만 출력한 배열\n");
//     for (i = 0; i < 5; i++){
//         printf("%3d  ", bae[0][i]);
//     }
//     printf("\n");
//     for (i = 1; i < 4; i++){
//         for (j = 0; j < 5; j++){
//             if (j != 1 && j != 2 && j != 3){
//                 printf("%3d                 ", bae[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     for (i = 0; i < 5; i++){
//         printf("%3d  ", bae[4][i]);
//     }
//     printf("\n2차원 배열 외곽 요소의 합은 %d 입니다.", outline);          
// }

#include <stdio.h>
int main() {
    printf("hello world");
    return 0;
}