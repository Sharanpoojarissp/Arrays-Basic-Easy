//Finding minimum element
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

//Finding maximum element   
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

//returning min & max

    p.first=min;
    p.second=max;
    return p;
}