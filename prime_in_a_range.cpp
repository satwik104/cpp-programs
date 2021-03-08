
    #include <iostream>
    using namespace std;
    int main() {
    	int startNum,endNum;
    	int found=0,count=0;
    	cout<>startNum;
    	cout<>endNum;
    	for (int i=startNum;i<=endNum;i++) {
    		for (int j=2;j<=sqrt(i);j++) {
    			if(i%j==0)
    			                  count++;
    		}
    		if(count==0&&i!=1) {
    			found++;
    			cout< "<<i<<endl;
    			count=0;
    		}
    		count=0;
    	}
    	cout<<"Total Prime Number Between Range "<<startNum<<" to
     "<<endNum<<" = "<<found<<endl;
    	return 1;
    }
