int doCirclesIntersect(struct Circle* c1, struct Circle* c2)
{
    int ans;
    int x1,y1,r1,x2,y2,r2;
    x1=c1->x;y1=c1->y;r1=c1->r;x2=c2->x;y2=c2->y;r2=c2->r;
    int sum=r1+r2,diff;
    if(r1>=r2)
    {
        diff=r1-r2;
    } 
    else
    {
        diff=r2-r1;
    }
        if((x1-x2)^2+(y1-y2)^2>sum^2 || (x1-x2)^2+(y1-y2)^2<diff^2)
        {
            ans=0;
        }
        else if((x1-x2)^2+(y1-y2)^2==sum^2 || (x1-x2)^2+(y1-y2)^2==diff^2)
        {
            ans=1;
        }
        else {ans=2;}
    return ans;

}
