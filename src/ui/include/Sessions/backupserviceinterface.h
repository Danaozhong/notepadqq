#ifndef _BACKUPSERVICEINTERFACE_H
#define _BACKUPSERVICEINTERFACE_H


class BackupServicePauserInterface
{
public:
    virtual ~BackupServicePauserInterface() = default;

    virtual std::unique_ptr<BackupServicePauserInterface> Clone () const = 0;

    virtual void pause() = 0;
    //virtual void resume() = 0;
};

#endif // _BACKUPSERVICEINTERFACE_H