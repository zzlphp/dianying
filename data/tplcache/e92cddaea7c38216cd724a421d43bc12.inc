{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.piaohua.com/html/zhanzheng/2012/0505/24278.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[����]</title>{/dede:match}
   {dede:trim replace=""}_Ѹ������_�������_Ʈ����Ӱ��{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}����ʱ�䣺[����]<br/>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div id="showinfo">[����]</div><ul class="mmlist">{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<font([^>]*)>{/dede:trim}
{dede:trim replace=""}</font>{/dede:trim}
{dede:trim replace=""}<strong([^>]*)>{/dede:trim}
{dede:trim replace=""}</strong>{/dede:trim}
{dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
   {dede:function}$rpstr = "www.piaohua.com";
$mystr = "www.xiaozhizhu.net";
@me = str_replace($rpstr,$mystr,@me);

{/dede:function}
{/dede:item}