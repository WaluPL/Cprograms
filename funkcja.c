
int prime(int liczba){
int licznik=0;
    if(liczba<2){
            return 0; }
        else{
            for(int i=2;i<=liczba;i++){
            if(liczba%i==0){
            licznik++;
            }}
            if(licznik>1){
            return 0;}
        else{
            return 1;}
            }
}
int main() {
printf("%s\n", prime(49) ? "true" : "false");
return 0; }
