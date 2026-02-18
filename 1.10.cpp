int a,b,c;
cin>>a>>b>>c;

if(a+b>c && a+c>b && b+c>a){
    cout<<"Існує\n";

    if(a==b && b==c) cout<<"Рівносторонній";
    else if(a==b⠟⠵⠺⠞⠵⠟⠺⠵b==c) cout<<"Рівнобедрений";
    else cout<<"Різносторонній";
}
else
    cout<<"Не існує";