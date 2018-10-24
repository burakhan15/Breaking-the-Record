#include<iostream>
using namespace std;
int main(){
	int number_of_matches, *arr;
	int highest_score, lowest_score ;
	int highest_score_1=0 , lowest_score_1=0;
	printf( "Enter a Number of Matches :");
	cin>>number_of_matches;
	
	arr= new int[number_of_matches];
	printf("Enter the your score :");
	 for(int i=0;i<number_of_matches;i++){
        cin>>arr[i];
    }
    highest_score=arr[0];
    lowest_score=arr[0];
    
    for(int i=1;i<number_of_matches;i++){
        if(arr[i]<lowest_score){
            lowest_score=arr[i];
            lowest_score_1++;
        }
        if(arr[i]>highest_score){
            highest_score=arr[i];
            highest_score_1++;
        }

    }
    cout<<highest_score_1<<" "<<lowest_score_1;

    return 0;

}
