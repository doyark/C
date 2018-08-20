void layout(TREE *pTree)
{
    int front ,rear;
    TREE  *queue[N];
    if(NULL == p) 
    {
        return;
    }
    for(rear = 1; rear < n; rear+)
    {
        queue[rear] = NULL;
    }
    front = rear = 1;
    //树根入队
    queue[rear] = pTree;
    while(queue[front] != NULL)
    {
        printf("%d\t",queue[front]->data)
        if(NULL != queue[front]->pLeft)
        {
            p[++rear] = queue[front]->pLeft;
        }
        if(NULL != queue[front]->pRight)
        {
            p[++rear] = queue[front]>pRight;
        }
        front++;
    }
}