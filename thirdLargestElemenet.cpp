  int n = arr.size();
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        
        if(n<3){
            return -1;
        }
        for(int i =0; i < n; i++)
        {
            if(arr[i]>=first)
            {
                third = second;
                second = first;
                first = arr[i];
            }else if(arr[i]>=second){
                third = second;
                second = arr[i];
            }else if(arr[i]>=third){
                third = arr[i];
            }
        }
           return third;
    }