// #include <stdio.h>
// #include<string.h>
// int main(void) {
//     char word[27];
//     scanf("%s",word);
//     int n;
//     scanf("%d",&n);
    
//     while(n--)
//     {
//         char a[27];
//         scanf("%s",a);
//         int x=0;
//         int l=strlen(a);
//         for(int i=0;a[i]!='\0';i++)
//         {
//             for(int j=0;word[j]!='\0';j++)
//             {
//                 if(a[i]==word[j])
//                 {
//                     x++;
//                     break;
//                 }
//             }
//         }
//         if(x==l)
//         {
//             printf("Yes\n");
//         }
//         else
//         {
//             printf("No\n");
//         }
        
//     }
// 	// your code goes here
// 	return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     string s; cin>>s;
//     int a[26]={0};
//     for(int i=0;i<s.size();i++){
//         char x=s[i];
//         int p=(int)x;
//         p=p-97;
//         a[p]=1;
//     }
//     int n;cin>>n;
//     while(n--){
//         int count=0;
//         string k;cin>>k;
//         for(int i=0;i<k.size();i++){
//             char y=k[i];
//             int w=(int)y;
//             w=w-97;
//             if(a[w]==0){
//                 count++;
//             }
//         }
//         if(count>0){
//             cout<<"No"<<endl;
//         }
//         else{
//             cout<<"Yes"<<endl;
//         }
//     }
// 	return 0;
// }




